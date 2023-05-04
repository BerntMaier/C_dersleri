#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	float s;
	int n,i;
	printf("N sayýsýný giriniz="); scanf("%d",&n);
	s=1.0;
	for(i=2;i<=n;i++) {
		s=(s+(1.0/i)); //i burada paydaada olduðu için casting yani(float) koymana gerek yok dedi.Buradaki püf nokta 1 i 1.0 olarak yazman gerekiyor k i sonuç float çýksýn ve devam etsin. 1 Yazarsan yanýnda foat yazsan dahi kabul etmiyor. Yani float ile iþlem yapcaðýn zaman (meslela 2 ile toplayacaksýn 2.0 yazman lazým) bu þekilde belirtmen gerekiyor
	}
	s=s*4;
	printf("Sonuç=%4.2f",s); //buradaki 4.2 yazýsý sonucun kaç basamaðýnýn yazýlacaðýný söyler. Mesela . nýn solundaki yani 4 sayýsý ilk 4 basamaðý, . dan sonraki yani 2 sayýsý virgülden sonra 2 basamaðý yazacaðýný belirler
	return(0);
}

