#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - display ELF header info
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success, 98 on error
 */
int main(int argc, char **argv)
{
    int fd;
    ssize_t bytes;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        write(2, "Usage: elf_header elf_filename\n", 31);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error: Can't read from file");
        exit(98);
    }

    bytes = read(fd, &header, sizeof(header));
    if (bytes != sizeof(header))
    {
        perror("Error: Can't read from file");
        close(fd);
        exit(98);
    }

    /* Validate ELF magic bytes */
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        write(2, "Not an ELF file\n", 16);
        close(fd);
        exit(98);
    }

    /* Display ELF header info here... */

    close(fd);
    return (1);
}

