#include <stdio.h>
#include <conio.h>
#include <locale.h>
//Türkçe karakter için " #include <locale.h> " kütüphanesi daha sonra da setlocale(LC_ALL,"Turkish"); yazýlýr.
int main(void) {
	setlocale(LC_ALL,"German");
	float a,b,c,d,enb;
	printf("Bitte ergänzen Sie die Graden:\n");
	printf("1.sayi= ");
	scanf("%f",&a);
	printf("2.sayi= ");
	scanf("%f",&b);
	printf("3.sayi= ");
	scanf("%f",&c);
	printf("4.sayi= ");
	scanf("%f",&d);
	
	if (a>b){  //Eðer if ve else komutlarý altýnda tek iþlem yapýlacaksa süslü paranteze gerek yok.  
		enb=a;
    }
	else {
		enb=b;
	}
	if(enb<c){ 
		enb=c;
	}
	if(enb<d){
		enb=d;
		
	}
	printf("die höchste grade = %f",enb);
	return(0);
	
	}
	


