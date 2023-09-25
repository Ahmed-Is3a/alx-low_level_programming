#ifndef MAIN
#define MAIN
#include <stdio.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);

char *rot13(char *c);

#endif
