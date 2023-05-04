#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int a,b,c,ucg;
	printf("HERZLICH WILLKOMMEN\n Bitte schreiben sie die Längen:");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);
	printf("c="); scanf("%d",&c);
	if((a==b)&&(a==c)) {
		ucg=3;
	}
	else { if((a==b) || (a==c) || (b==c)) {  // "||" veya , ya da operatörüdür. DÝKKAT!!! BURADAKI a"=="b olmak zorundadýr!!! Sayýsal olarak birbirine eþit mi diye soruyoruz.
		ucg=2;
		}
		else {
		ucg=1;
		}
	}
		switch(ucg)	{
		case 1: printf("Cesit Kenar"); break;
		case 2: printf("Ikiz Kenar"); break;
		case 3: printf("Eskenar"); break;  //default demeye gerek yok. Çünkü baþta yazdýðýn ifadeye göre ucg zaten ya 1 ya 2 ya 3 olabiliyor.
	}
	return(0);
}
