#ifndef _MAIN_H__
#define _MAIN_H_

char*_memset(char*s,charb,unsigned intn);
char*_memcpy(char*dest,char*src,unsigned intn);
char*_strchr(char*s,charc);
unsigned int _strspn(char*s,char*accept);
char*_strpbrk(char*s,char*accept);
char*_strstr(char*haystack,char*needle);
void print_chessboard(char(*a)[8]);
int putchar(charc);
void print_diagsums(int*a,int size);
void set_string(char **s,char*to);

#endif
