#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main(void) {
	setlocale(LC_ALL,"Turkish");
	float a,b,c,d,x1,x2;
	// CEVAP: a=5, b=1 , c=4 girilir ise Reel kök yoktur ; a=1, b=1, c=-4 girilir ise x1=2.561553 x2=1.561553 bulunur
	printf("Hoþ geldiniz. Lütfen katsayýlarý giriniz\n");
	printf("a= "); scanf("%f",&a);
	printf("b= "); scanf("%f",&b);
	printf("c= "); scanf("%f",&c);
	
	d=b*b-4*a*c;
	
	if(d==0) { x1=(-b)/(2*a); printf("1.kök= %f",x1); } //tek = saðdaki iþlemi eþittirin solundaki deðere eþittir. == ise sayýsal olarak eþitler.
	 
	 	else { if(d>0) { x1=(-b-sqrt(d))/(2*a); x2=(-b+sqrt(d))/(2*a);
	 	
		 printf("1. ve 2. kök=\n x1= %f , x2= %f",x1,x2); }
		 
		 		else{ printf(" Reel kök yoktur.");  } }
	
	return(0);
}
