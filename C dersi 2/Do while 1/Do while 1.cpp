#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"German");
	//koþula bakmdan do ile komutlarý ne olursa olsun yapacak. sonra while parantezindeki koþulu saðlayana kadar baþa saracak ve tekrar komutu uygulayacak.
	int a;
	a=0; 
	do {
		a++; printf("%4d",a); 
	} while (a<100);
	return(0);

}

