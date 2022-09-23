#ifndef MAIN_H
#define MAIN_H

/**
* File: main.h
* Auth: Auwal Linus
* Desc: Header file containing prototypes for all functions
*	used in the 0x06-pointers_arrays_strings
*/
int _putchar(char c);
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif
