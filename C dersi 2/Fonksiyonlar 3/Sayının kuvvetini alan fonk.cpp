#include <stdio.h>
#include <conio.h>
#include <locale.h>

int us(int,int);

int us(int x,int n) {
	int i, f=1;
	for(i=1;i<=n;i++) {
		f=f*x; 
	}
	return(f); //bir fonk.'un sadece bir çıktı verebilir.
}

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,x,s;
	printf("X değerini giriniz\n");  scanf("%d",&x);
	printf("n değerini giriniz\n");  scanf("%d",&n);
	s=us(x,n);
	printf("%d uzeri %d = %d",x,n,s);
	return(0);
}
