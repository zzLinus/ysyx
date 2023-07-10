#pragma once
#include "difftest.h"
#include "defs.h"

// memore management
class pmem
{
   public:
    pmem();
    ~pmem();
    void read_img(const char *img_file);
    uint8_t *guest_to_host(uint64_t paddr);

    uint64_t host_read(void *addr, uint8_t len);
    void host_write(void *addr, uint64_t data, uint8_t mask);
   private:
    FILE *fp;
    uint8_t mem[CONFIG_MSIZE];
};

