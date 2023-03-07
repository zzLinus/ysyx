#include <common.h>
#include <elf.h>

#define Elfw(type) Elf64_##type

void init_ftrace(const char* p)
{
    printf("ready to parse elf file %s\n", p);  // TODO : implement elf parsing
    Elfw(Ehdr) header;
    Elfw(Shdr) sec_header;
    Elfw(Sym) sym_header;
    FILE* file = fopen(p, "rb");
    if (file)
    {
        fread(&header, sizeof(header), 1, file);
        if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
        {
            printf("this is a valid elf file %d\n", sym_header.st_shndx);
        }

        printf("section header len : %d\n", header.e_shnum);
        fseek(file, header.e_shoff, SEEK_SET);

        for (int i = 0; i < header.e_shnum; i++)
        {
            fread(&sec_header, sizeof(sec_header), 1, file);
            printf("%d\n", i);
            printf("find sec : size : %lx offset : %lx\n", sec_header.sh_size, sec_header.sh_offset);
            if (sec_header.sh_type == SHT_STRTAB)
            {
                printf("find STRTAB : size : %lx offset : %lx\n", sec_header.sh_size, sec_header.sh_offset);
								break;
            }
            else if (sec_header.sh_type == SHT_SYMTAB)
            {
                printf("find SYMTAB : size : %lx offset : %lx\n", sec_header.sh_size, sec_header.sh_offset);
            }
        }

        fclose(file);
    }
}
