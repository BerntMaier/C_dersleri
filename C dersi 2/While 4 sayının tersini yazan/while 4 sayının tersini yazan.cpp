#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) { // ...%10 dedi�imiz komut %in solundaki say�y�y� b�ler ve b�l�m sonucu kalan� cevap olarak ��kart�r mesela 7139%10=9.
	setlocale(LC_ALL,"German");
	int sayi,toplam,k;
	printf("bitte schreiben Sie die Zahl=\n"); scanf("%d",&sayi);
	while(sayi>0) { //alttaki komutlarda �u ger�ekle�iyor. girilen say� 7139. 7139%10=k=9 ,, 7139/10=713.9 sayi integer tan�mland���ndan --> sayi=713 atan�r. Toplam=0+9 dur. Bir d�ng� daha yazal�m: 713%10=3=k ,, sayi=713/10=71.3 sayi integer tan�mland���ndan --> sayi=71 atan�r toplam=9+3 �eklinde say� 0 a e�itlenene kadar devam ediyor.
		k=sayi%10; toplam=toplam*10+k;
		sayi=sayi/10; 
	}
	printf("die Umkherung der Zahl ist=%d",toplam);
	return(0);
}
