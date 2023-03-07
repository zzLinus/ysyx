#include <common.h>
#include <elf.h>

#define Elfw(type) Elf64_##type

void init_ftrace(const char* p)
{
    printf("ready to parse elf file %s\n", p);  // TODO : implement elf parsing
    Elfw(Ehdr) header;
    Elfw(Shdr) sec_header;
    Elfw(Sym) symtab;

    /**Elfw(Off) strtab_offset = 0;*/
    Elfw(Off) symtab_offset = 0;

    uint64_t symtab_num;
    FILE* file = fopen(p, "rb");
    if (file)
    {
        fread(&header, sizeof(header), 1, file);
        if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
        {
            printf("this is a valid elf file\n");
        }

        printf("section header len : %d\n", header.e_shnum);
        fseek(file, header.e_shoff, SEEK_SET);

        for (int i = 0; i < header.e_shnum; i++)
        {
            fread(&sec_header, sizeof(sec_header), 1, file);
            printf(
                "find sec : name : %d size : %lx offset : %lx\n",
                sec_header.sh_name,
                sec_header.sh_size,
                sec_header.sh_offset);
            if (sec_header.sh_type == SHT_STRTAB)
            {
                printf(
                    "find STRTAB : name : %d size : %lx offset : %lx\n",
                    sec_header.sh_name,
                    sec_header.sh_size,
                    sec_header.sh_offset);
                /**strtab_offset = sec_header.sh_offset;*/
                break;
            }
            else if (sec_header.sh_type == SHT_SYMTAB)
            {
                printf(
                    "find SYMTAB : name : %d num : %ld offset : %lx\n",
                    sec_header.sh_name,
                    sec_header.sh_size / sec_header.sh_entsize,
                    sec_header.sh_offset);
                symtab_num = sec_header.sh_size / sec_header.sh_entsize;
                symtab_offset = sec_header.sh_offset;
            }
        }

        fseek(file, symtab_offset, SEEK_SET);
        for (int i = 0; i < symtab_num; ++i)
        {
            fread(&symtab, sizeof(symtab), 1, file);
						if(ELF64_ST_TYPE(symtab.st_info) == STT_FUNC)
								printf("function symbol : %lx\n", symtab.st_value);
        }

        fclose(file);
    }
}
