// file: strcat.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";

	printf("%s\n", strcat(dest, " is "));
	//printf("%d\n", strcat_s(dest, 80, " is "));
	//printf("%s\n", dest);
	printf("%s\n", strncat(dest, "a java", 2));
	//printf("%d\n", strncat_s(dest, 80, "a proce", 2));
	//printf("%s\n", dest);
	printf("%s\n", strcat(dest, "procedural "));
	printf("%s\n", strcat(dest, "language."));

	return 0;
}