#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,sayi,carpim,i;
	printf("L�tfen �arp�lacak say�lar� giriniz=\n");
	printf("a="); scanf("%d",&sayi);
	printf("b="); scanf("%d",&n);
	carpim=0;
	for (i=1;i<=n;i++) {
		carpim=carpim+sayi;
	}
	printf("Sonu�=%d",carpim);
	return(0);
}
