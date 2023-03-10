#include <common.h>
#include <elf.h>

#define Elfw(type)        Elf64_##type
#define ELF_FUNC_MAX      20
#define ELF_FUNC_NAME_MAX 10

typedef struct
{
    uint64_t addr;
    char name[ELF_FUNC_NAME_MAX];
} ElfFuncInfo;

ElfFuncInfo elf_funcs[ELF_FUNC_MAX];

uint32_t elf_nums = 0;

void get_fname(FILE* file, char* dst, size_t offset, uint32_t start)
{
}

void init_ftrace(const char* p)
{
    printf("ready to parse elf file %s\n", p);  // TODO : implement elf parsing
    Elfw(Ehdr) header;
    Elfw(Shdr) sec_header;
    Elfw(Sym) symtab;

    Elfw(Off) strtab_offset = 0;
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
                strtab_offset = sec_header.sh_offset;
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

        for (int i = 0; i < symtab_num; i++)
        {
            fseek(file, symtab_offset + i * sizeof(symtab), SEEK_SET);
            fread(&symtab, sizeof(symtab), 1, file);
            if (ELF64_ST_TYPE(symtab.st_info) == STT_FUNC)
            {
                printf("function symbol : value : %lx name : %d\n", symtab.st_value, symtab.st_name);
                fseek(file, strtab_offset + symtab.st_name, SEEK_SET);
                fgets(elf_funcs[elf_nums].name, ELF_FUNC_NAME_MAX, file);
                elf_nums++;
            }
        }

        for (int i = 0; i < elf_nums; i++)
        {
            printf("elf_funcs : addr : %lx name : %s\n", elf_funcs[i].addr, elf_funcs[i].name);
        }

        fclose(file);
    }
}
