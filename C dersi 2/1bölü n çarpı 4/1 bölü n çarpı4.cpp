#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	float s;
	int n,i;
	printf("N say�s�n� giriniz="); scanf("%d",&n);
	s=1.0;
	for(i=2;i<=n;i++) {
		s=(s+(1.0/i)); //i burada paydaada oldu�u i�in casting yani(float) koymana gerek yok dedi.Buradaki p�f nokta 1 i 1.0 olarak yazman gerekiyor k i sonu� float ��ks�n ve devam etsin. 1 Yazarsan yan�nda foat yazsan dahi kabul etmiyor. Yani float ile i�lem yapca��n zaman (meslela 2 ile toplayacaks�n 2.0 yazman laz�m) bu �ekilde belirtmen gerekiyor
	}
	s=s*4;
	printf("Sonu�=%4.2f",s); //buradaki 4.2 yaz�s� sonucun ka� basama��n�n yaz�laca��n� s�yler. Mesela . n�n solundaki yani 4 say�s� ilk 4 basama��, . dan sonraki yani 2 say�s� virg�lden sonra 2 basama�� yazaca��n� belirler
	return(0);
}

