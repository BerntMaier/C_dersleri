#include <stdio.h>
#include <conio.h>
#include <locale.h>
//T�rk�e karakter i�in " #include <locale.h> " k�t�phanesi daha sonra da setlocale(LC_ALL,"Turkish"); yaz�l�r.
int main(void) {
	setlocale(LC_ALL,"German");
	float a,b,c,d,enb;
	printf("Bitte erg�nzen Sie die Graden:\n");
	printf("1.sayi= ");
	scanf("%f",&a);
	printf("2.sayi= ");
	scanf("%f",&b);
	printf("3.sayi= ");
	scanf("%f",&c);
	printf("4.sayi= ");
	scanf("%f",&d);
	
	if (a>b){  //E�er if ve else komutlar� alt�nda tek i�lem yap�lacaksa s�sl� paranteze gerek yok.  
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
	printf("die h�chste grade = %f",enb);
	return(0);
	
	}
	


