#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,i,toplam,dizi[50]; //burada dizimiz 50 elemanl�d�r demi� olduk.
	printf("L�tfen N say�s�n� giriniz:\n (N say�s� 50 ye e�it veya k���k olmal�d�r)\n"); scanf("%d",&n);
	for(i=0;i<n;i++) { //diziye 0. elemandan ba�lan�r. Binan�n 0. kat�ndan giri� yap�yorsun gibi d���n.
		printf("L�tfen dizinin %d. eleman�n� giriniz\n",(i+1));
		scanf("%d",&dizi[i]); //Girilen say� dizinin i. say�s�na atanacak.	
	}
	toplam=0;
	for(i=0;i<n;i++) {
		toplam=toplam+dizi[i];
	}
	printf("Toplam=  %d",toplam); //girdi�in say�lar�n toplam�n� yazacak bu kod.
	
	return(0);
}
