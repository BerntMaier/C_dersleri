#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	int a;
	setlocale(LC_ALL,"German") ;
	printf("Bitte schreiben sie die nummer:"); scanf("%d",&a);
	switch(a)  {
		
		case 1 : printf("Sie sind in die erste Gruppe"); break;
		case 2 : printf("Sie sind in die zweite Gruppe"); break;
		case 3 : printf("Sie sind in die dritte Gruppe "); break;
		default: printf(" INNERHALB 1 UND 3, SCHREIBEN SIE BITTE DIE NUMMER ");
		
	}
	
	return(0);
}
