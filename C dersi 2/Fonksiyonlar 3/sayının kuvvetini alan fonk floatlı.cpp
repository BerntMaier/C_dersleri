#include <stdio.h>
#include <conio.h>
#include <locale.h>
//Bir öncekinden farklı olarak int yerine float yazdık
float us(int,int);

float us(int x,int n) {
	int i, f=1;
	for(i=1;i<=n;i++) {
		f=f*x; 
	}
	return(f);
}

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,x;   float s;
	printf("X değerini giriniz\n");  scanf("%d",&x);
	printf("n değerini giriniz\n");  scanf("%d",&n);
	s=us(x,n);
	printf("%d uzeri %d = %f",x,n,s);
	return(0);
} //nedense float çıkmadı sonuç hoca da anlamadı
