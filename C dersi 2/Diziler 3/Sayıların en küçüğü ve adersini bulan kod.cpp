#include <stdio.h>
#include <conio.h>
#include <locale.h>
// n tane girilen sayýyý karþýlaþtýrýp en küçük sayýyý belirten ve sayýnýna dresini yazan kod.
int main(void) {
	setlocale(LC_ALL,"German");
	int i,n,a[50],enk,yer;
	printf("Wie viele Zahlen werden Sie schreiben?\n"); scanf("%d",&n);
	printf("---------------------------------------\n");
	for(i=0;i<n;i++) {
		printf("Bitte schreiben Sie %d. Zahl\n",(i+1)); scanf("%d",&a[i]); //printlerken i+1 diyoruz ya () içine almana gerek yok aslýnda ama ihtiml olduðundan alýyoruz
	}
	enk=a[0]; //en küçük sayýyý herhangi bir adersteki sayýya  atayabilirsin aslýnda.
	yer=0; // adres için.
	for(i=0;i<=(n-1);i++) { // bu for döngüsü ile az önce girdiðin bütün sayýlarý enk ya atadýðýn sayý ile sýrayla if ile karþýlaþtýýyor.
		if(enk>a[i]) {
			enk=a[i]; yer=i;
		}
	}
	printf("%d ist die wenigsten Zahl und die Adresse ist %d .",enk,(yer+1)); // dizinin en küçük sayýsýný belirtmek için printf("%d",dizi[yer]) de yapabilirsin.
	return(0); //
}
