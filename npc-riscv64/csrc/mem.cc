#include "mem.h"

// NOTE: dummy image (if no input image,npc will fall back to this dummy image)
uint32_t img[INST_NUM] = {
    // default dummy test instructions
    0x00000413,  // 80000000:	00000413          	li	s0,0
    0x00009117,  // 80000004:	00009117          	auipc	sp,0x9
    0xffc10113,  // 80000008:	ffc10113          	addi	sp,sp,-4 # 80009000 <_end>
    0x00c000ef,  // 8000000c:	00c000ef          	jal	ra,80000018 <_trm_init>

    0x00000513,  // 80000010:	00000513          	li	a0,0
    0x00008067,  // 80000014:	00008067          	ret(jalr)

    0xff010113,  // 80000018:	ff010113          	addi	sp,sp,-16
    0x00000517,  // 8000001c:	00000517          	auipc	a0,0x0
    0x01450513,  // 80000020:	01450513          	addi	a0,a0,20 # 80000030 <_etext>
    0x00113423,  //  TODO : 80000024:	00113423          	sd	ra,8(sp)

    0xfe9ff0ef,                          // 80000028:	fe9ff0ef          	jal	ra,80000010 <main>
    0b00000000000000000000000001110011,  // 0000 0000 0000 00000 000 00000 1110011 -> ebreak
    0x0000006f,                          // 8000002c:	0000006f          	j	8000002c <_trm_init+0x14>
                                         //  WARN : infinet loop should not reach here

};

pmem::pmem() : fp(NULL)
{
    FILE *fp = NULL;
    for (int i = 0; i < INST_NUM; i++)  // read in defualt img
    {
        memcpy(mem + i * 4, img + i * 1, sizeof(uint32_t));
    }
}
pmem::~pmem(){};

void pmem::read_img(const char *img_file)
{
    fp = fopen(img_file, "rb");
    if (fp == NULL)
    {
        printf("failed to load img : %s\n", img_file);
        assert(0);
    }
    else
    {
        printf("Success to load img\n");
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    printf("The image is %s, size = %ld\n", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);
    fclose(fp);
    difftest_loadimg((uint32_t *)mem, size);
}

uint8_t * pmem::guest_to_host(uint64_t paddr)
{
    return mem + paddr - CONFIG_MBASE;
}

uint64_t pmem::host_read(void *addr, uint8_t len)
{
    printf("host read : addr :%lx\n", addr);
    switch (len)
    {
        case 1:  // == *((type *)addr)
        case 2: return *(uint16_t *)addr;
        case 4: return *(uint32_t *)addr;
        case 8: return *(uint64_t *)addr;
        default: assert(0);
    }
}

void pmem::host_write(void *addr, uint64_t data, uint8_t mask)
{
    printf("host write : addr[%lx] data[%lx] mask[%x]\n", (uint64_t *)addr, data, mask);
    switch (mask)
    {
        case 0x1: *(uint8_t *)addr = (uint8_t)data; return;
        case 0x2: *(uint16_t *)addr = (uint16_t)data; return;
        case 0xf: *(uint32_t *)addr = (uint32_t)data; return;
        case 0xff: *(uint64_t *)addr = (uint64_t)data; return;
        default: assert(0);  // NOTE: should not get here
    }
}
