#include "main.h"

/**
 * print_error - helper function: prints error message
 * @str: error message
 */

void print_error(const char *str)
{
	dprintf(STDERR_FILENO, "Error: %s\n", str);
	exit(98);
}

/**
 * elf_header - displays the information contained in the ELF header
 * at the start of an ELF file.
 * @str: filename
 */

void elf_header(const char *str)
{
	Elf64_Ehdr header;
	char buff[sizeof(Elf64_Ehdr)];
	int fd = open(str, O_RDONLY);

	if (fd == -1)
		print_error("Failed to open the file.");

	if (read(fd, buff, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Failed to read ELF header.");

	memcpy(&header, buff, sizeof(Elf64_Ehdr));

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
	||header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file.");
	}
	printf("Magic: %c%c%c%c\n", header.e_ident[EI_MAG1], header.e_ident[EI_MAG2],
			header.e_ident[EI_MAG3], header.e_ident[EI_MAG0]);

	printf("Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Other");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			header.e_type == ET_DYN ? "DYN (Shared object file)" :
		       	header.e_type == ET_REL ? "REL (Relocatable file)" :
		       	"Other");
	printf("Entry point address: 0x%lx\n", header.e_entry);
	close(fd);
}

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: the arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	const char *name;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return 1;
	}
	name = argv[1];

	elf_header(name);
	return (0);
}
