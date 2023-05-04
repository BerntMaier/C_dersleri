#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) { // ...%10 dediðimiz komut %in solundaki sayýyýyý böler ve bölüm sonucu kalaný cevap olarak çýkartýr mesela 7139%10=9.
	setlocale(LC_ALL,"German");
	int sayi,toplam,k;
	printf("bitte schreiben Sie die Zahl=\n"); scanf("%d",&sayi);
	while(sayi>0) { //alttaki komutlarda þu gerçekleþiyor. girilen sayý 7139. 7139%10=k=9 ,, 7139/10=713.9 sayi integer tanýmlandýðýndan --> sayi=713 atanýr. Toplam=0+9 dur. Bir döngü daha yazalým: 713%10=3=k ,, sayi=713/10=71.3 sayi integer tanýmlandýðýndan --> sayi=71 atanýr toplam=9+3 þeklinde sayý 0 a eþitlenene kadar devam ediyor.
		k=sayi%10; toplam=toplam*10+k;
		sayi=sayi/10; 
	}
	printf("die Umkherung der Zahl ist=%d",toplam);
	return(0);
}
