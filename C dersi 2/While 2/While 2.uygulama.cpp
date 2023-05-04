#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int n,sonuc,i;
	printf(" Wie viele zahlen werden Sie schreiben?\n");
	scanf("%d",&n);
	sonuc=0; i=1;
	while(i<=n) {
		sonuc=sonuc+i; i=i+2;
	}
	printf("die Antwort ist=%d",sonuc);
	return (0);
}
