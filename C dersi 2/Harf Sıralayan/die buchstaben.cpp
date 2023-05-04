#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	char ch;
	printf("GROßBUCHSTABEN=\n");
	for(ch='A';ch<='Z';ch++) {
		printf("%c",ch);
	}
	return(0);
}
