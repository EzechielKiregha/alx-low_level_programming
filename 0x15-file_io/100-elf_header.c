#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header_info(const Elf64_Ehdr *header) {
	
	int i;
	
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                              ");
	switch (header->e_ident[EI_CLASS]) {
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("Invalid\n"); break;
	}

	printf("  Data:                               ");
	switch (header->e_ident[EI_DATA]) {
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("Invalid\n"); break;
	}

	printf("  Version:                            %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                             ");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		default: printf("Other\n"); break;
	}

	printf("  ABI Version:                        %d\n", header->e_ident[EI_ABIVERSION]);
        printf("  Type:                               ");
        switch (header->e_type)
        {
                case ET_NONE:
                        printf("NONE (None)\n");
                        break;
                case ET_REL:
                        printf("REL (Relocatable file)\n");
                        break;
                case ET_EXEC:
                        printf("EXEC (Executable file)\n");
                        break;
                case ET_DYN:
                        printf("DYN (Shared object file)\n");
                        break;
                case ET_CORE:
                        printf("CORE (Core file)\n");
                        break;
                default:
                        printf("<unknown: %x>\n", header->e_type);
        }

	printf("  Entry point address:                0x%lx\n", (unsigned long) header->e_entry);
}
/**
 * main - Checks the code incase an error, otherwise it will print the ELF
 * header info on STDOUT.
 * @argc: a number value of all possible program's arguments
 * @argv: an array of arguments
 *
 * Return: 0 for success, otherwise
 * 98 for failure (error in file opening or unknown file.)
 *
 */

int main(int argc, char *argv[]) {

	int fd;
	Elf64_Ehdr header;
	ssize_t n_read;
	
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		return (98);
	}

	n_read = read(fd, &header, sizeof(header));
	if (n_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "File is not an ELF file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);
	close(fd);

	return (0);
}

