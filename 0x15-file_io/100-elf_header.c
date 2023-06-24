#include "main.h"

/**
 * check_Elf - checks for anan elf file
 * @ident: Pointer to the file
 * Return: Success
 */
void check_Elf(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 && ident[i] != 'E' && ident[i] != 'L' && ident[i] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_Magic - prints information on magic
 * @ident: Pointer to the file
 * Return: Success
 */
void print_Magic(unsigned char *ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_Class - prints info on class
 * @ident: A pointer to an array containing the ELF class
 * Return: Success
 */
void print_Class(unsigned char *ident)
{
	printf("Class: ");

	switch (ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;

	case ELFCLASS32:
		printf("ELF32\n");
		break;

	case ELFCLASS64:
		printf("ELF64\n");
		break;

	default:
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_Data - prints the data of an ELF header
 * @ident: A pointer to an array containing ELF class
 * Return: Success
 */

void print_Data(unsigned char *ident)
{
	printf("Data: ");

	switch (ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;

	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;

	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;

	default:
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_Version - prints the version of an ELF header
 * @ident: pointer to an array containing the ELF version
 * Return: Success
 */
void print_Version(unsigned char *ident)
{
	printf("Version: %d", ident[EI_VERSION]);
	switch (ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;

	default:
		printf("\n");
	}
}

/**
 * print_OSABI - prints the OSABI of the ELF header file
 * @ident: Pointer to an array containing the elf file
 * Return: Success
 */
void print_OSABI(unsigned char *ident)
{
	printf("OS/ABI: ");

	switch (ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * print_ABI - prints the ABI of an elf header file
 * @ident: Pointer to an array of an elf header file
 * Return: Success
 */
void print_ABI(unsigned char *ident)
{
	printf("ABI Version: %d\n", ident[EI_ABIVERSION]);
}

/**
 * print_Type - prints the Type of an elf header file
 * @type: elf type
 * @ident: Pointer to an array of the elf version
 * Return: Success
 */

void print_Type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("Type: ");
	switch (type)
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_Entry - prints Entry of an elf header file
 * @entry: Number of entries made
 * @ident: Pointer to an array of the elf version
 * Return: Success
 */

void print_Entry(unsigned long int entry, unsigned char *ident)
{
	printf("Entry point address: ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_Elf - closes an elf file
 * @fd: file descriptornof the elf file
 * Return: Success
 */
void close_Elf(int fd)
{
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Closing file");
		exit(98);
	}
}

/**
 * main - Entry point of the program.
 * Description: If the file is not an ELF file return error
 * @argc: Argument count
 * @argv: Pointer to an array of arguements
 * Return: 0 on success
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	Elf64_Ehdr *header;
	int fd, readResult;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		close_Elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}

	readResult = read(fd, header, sizeof(Elf64_Ehdr));
	if (readResult == -1)
	{
		free(header);
		close_Elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	check_Elf(header->e_ident);
	printf("ELF Header:\n");
	print_Magic(header->e_ident);
	print_Class(header->e_ident);
	print_Data(header->e_ident);
	print_Version(header->e_ident);
	print_OSABI(header->e_ident);
	print_ABI(header->e_ident);
	print_Type(header->e_type, header->e_ident);
	print_Entry(header->e_entry, header->e_ident);
	free(header);
	close_Elf(fd);
	return (0);
}
