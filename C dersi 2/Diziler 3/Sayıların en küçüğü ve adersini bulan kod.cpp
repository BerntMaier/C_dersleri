#include <stdio.h>
#include <conio.h>
#include <locale.h>
// n tane girilen say�y� kar��la�t�r�p en k���k say�y� belirten ve say�n�na dresini yazan kod.
int main(void) {
	setlocale(LC_ALL,"German");
	int i,n,a[50],enk,yer;
	printf("Wie viele Zahlen werden Sie schreiben?\n"); scanf("%d",&n);
	printf("---------------------------------------\n");
	for(i=0;i<n;i++) {
		printf("Bitte schreiben Sie %d. Zahl\n",(i+1)); scanf("%d",&a[i]); //printlerken i+1 diyoruz ya () i�ine almana gerek yok asl�nda ama ihtiml oldu�undan al�yoruz
	}
	enk=a[0]; //en k���k say�y� herhangi bir adersteki say�ya  atayabilirsin asl�nda.
	yer=0; // adres i�in.
	for(i=0;i<=(n-1);i++) { // bu for d�ng�s� ile az �nce girdi�in b�t�n say�lar� enk ya atad���n say� ile s�rayla if ile kar��la�t��yor.
		if(enk>a[i]) {
			enk=a[i]; yer=i;
		}
	}
	printf("%d ist die wenigsten Zahl und die Adresse ist %d .",enk,(yer+1)); // dizinin en k���k say�s�n� belirtmek i�in printf("%d",dizi[yer]) de yapabilirsin.
	return(0); //
}
