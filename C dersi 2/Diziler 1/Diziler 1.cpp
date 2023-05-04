#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,i,toplam,dizi[50]; //burada dizimiz 50 elemanlýdýr demiþ olduk.
	printf("Lütfen N sayýsýný giriniz:\n (N sayýsý 50 ye eþit veya küçük olmalýdýr)\n"); scanf("%d",&n);
	for(i=0;i<n;i++) { //diziye 0. elemandan baþlanýr. Binanýn 0. katýndan giriþ yapýyorsun gibi düþün.
		printf("Lütfen dizinin %d. elemanýný giriniz\n",(i+1));
		scanf("%d",&dizi[i]); //Girilen sayý dizinin i. sayýsýna atanacak.	
	}
	toplam=0;
	for(i=0;i<n;i++) {
		toplam=toplam+dizi[i];
	}
	printf("Toplam=  %d",toplam); //girdiðin sayýlarýn toplamýný yazacak bu kod.
	
	return(0);
}
