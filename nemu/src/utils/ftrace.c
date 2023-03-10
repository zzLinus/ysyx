#include <common.h>
#include <elf.h>

ElfFuncInfo elf_funcs[ELF_FUNC_MAX];
uint32_t elf_nums = 0;

void init_ftrace(const char* p)
{
#ifdef CONFIG_FTRACE
    Log("Ready to parse elf file %s", p);  // TODO : implement elf parsing
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
            Log("Valid elf file");
        }
        fseek(file, header.e_shoff, SEEK_SET);

        for (int i = 0; i < header.e_shnum; i++)
        {
            fread(&sec_header, sizeof(sec_header), 1, file);
            if (sec_header.sh_type == SHT_STRTAB)
            {
                strtab_offset = sec_header.sh_offset;
                break;
            }
            else if (sec_header.sh_type == SHT_SYMTAB)
            {
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
                fseek(file, strtab_offset + symtab.st_name, SEEK_SET);
                fgets(elf_funcs[elf_nums].name, ELF_FUNC_NAME_MAX, file);
                elf_funcs[elf_nums].addr = symtab.st_value;
                elf_funcs[elf_nums].size = symtab.st_size;
                elf_nums++;
            }
        }

        Log("Ftrace init success");
        for (int i = 0; i < elf_nums; i++)
        {
            printf(
                "elf_funcs[%d] addr : %lx name : %s size : %ld \n",
                i,
                elf_funcs[i].addr,
                elf_funcs[i].name,
                elf_funcs[i].size);
        }

        fclose(file);
    }
#endif
}
