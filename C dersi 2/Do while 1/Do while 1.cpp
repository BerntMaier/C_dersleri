#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"German");
	//ko�ula bakmdan do ile komutlar� ne olursa olsun yapacak. sonra while parantezindeki ko�ulu sa�layana kadar ba�a saracak ve tekrar komutu uygulayacak.
	int a;
	a=0; 
	do {
		a++; printf("%4d",a); 
	} while (a<100);
	return(0);

}

