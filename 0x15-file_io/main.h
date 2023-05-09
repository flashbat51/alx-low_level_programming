#ifndef IO_
#define IO_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _strlen(const char *s);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
