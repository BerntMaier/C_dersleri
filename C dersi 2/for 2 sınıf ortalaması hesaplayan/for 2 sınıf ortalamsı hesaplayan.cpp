#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	int sayi,toplam,i,n;
	float ort;
	printf("Ka� say�n�n ortalamas� al�nacak?\n"); scanf("%d",&n);
	printf("L�tfen say�lar� giriniz\n");
	toplam=0;
	for(i=1;i<=n;i++) {
		printf("%d.say�y� giriniz=\n",i);
		scanf("%d",&sayi); 
		toplam=toplam+sayi;
	}
	ort=(float)toplam/n ;
	printf("Girilen say�n�n ortalamas�=\n %f",ort);
	return(0);
	
}
