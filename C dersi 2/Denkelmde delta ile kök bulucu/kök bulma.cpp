#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main(void) {
	setlocale(LC_ALL,"Turkish");
	float a,b,c,d,x1,x2;
	// CEVAP: a=5, b=1 , c=4 girilir ise Reel k�k yoktur ; a=1, b=1, c=-4 girilir ise x1=2.561553 x2=1.561553 bulunur
	printf("Ho� geldiniz. L�tfen katsay�lar� giriniz\n");
	printf("a= "); scanf("%f",&a);
	printf("b= "); scanf("%f",&b);
	printf("c= "); scanf("%f",&c);
	
	d=b*b-4*a*c;
	
	if(d==0) { x1=(-b)/(2*a); printf("1.k�k= %f",x1); } //tek = sa�daki i�lemi e�ittirin solundaki de�ere e�ittir. == ise say�sal olarak e�itler.
	 
	 	else { if(d>0) { x1=(-b-sqrt(d))/(2*a); x2=(-b+sqrt(d))/(2*a);
	 	
		 printf("1. ve 2. k�k=\n x1= %f , x2= %f",x1,x2); }
		 
		 		else{ printf(" Reel k�k yoktur.");  } }
	
	return(0);
}
