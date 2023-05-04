#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,sayi,carpim,i;
	printf("Lütfen çarpýlacak sayýlarý giriniz=\n");
	printf("a="); scanf("%d",&sayi);
	printf("b="); scanf("%d",&n);
	carpim=0;
	for (i=1;i<=n;i++) {
		carpim=carpim+sayi;
	}
	printf("Sonuç=%d",carpim);
	return(0);
}
