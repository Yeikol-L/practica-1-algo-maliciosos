#include <stdio.h>
#include <string.h>

int main() {
	char str_a[20];
	char *pointer;
	char *pointer2;

	strcpy(str_a, "Hola, yeikol!\n");
	pointer = str_a;
	printf(pointer);

	pointer2  = pointer + 2;
	printf(pointer2);
	strcpy(pointer2, "Copiado!\n");
	printf(pointer);
	return 0;
}
