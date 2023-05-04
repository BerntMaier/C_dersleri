#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	int sayi,toplam,i,n;
	float ort;
	printf("Kaç sayýnýn ortalamasý alýnacak?\n"); scanf("%d",&n);
	printf("Lütfen sayýlarý giriniz\n");
	toplam=0;
	for(i=1;i<=n;i++) {
		printf("%d.sayýyý giriniz=\n",i);
		scanf("%d",&sayi); 
		toplam=toplam+sayi;
	}
	ort=(float)toplam/n ;
	printf("Girilen sayýnýn ortalamasý=\n %f",ort);
	return(0);
	
}
