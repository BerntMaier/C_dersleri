#include <stdio.h>

main() {
	FILE *dosya;
	int i;
	dosya=fopen("test.txt","w"); // w veriyi yaz kaydet demek write dan geliyor. r deseydik readable oalcakt� sadece test.txt ad�ndaki dosyay� al�p okuyacakt�  //fopen file open demek. test.txt ad�na bir text dosyas� a� demek.
	for(i=1;i<6;i++) {
		fprintf (dosya, "%3d\n",i);
	}
	fclose(dosya); //bu cpp dosyas�n� kaydeti�ni yere not defteri a�t�
}


// fprintf(i�aret�i, bi�imlendirme tan�mlar�,de�i�ken);
//excel de metinden veri al diye bir se�nek var sol �stte. ORadan excele yans�tabiliyorsun
//mesela an� addaki text dosyas�na  for i=8;i<12;i++ dersen �nceki doosyay� silip yeni dosyay� getiriyor
//�devde d 1000 lik bir dizi olsa bu for d�ng�s�ndeki gibi atayabilirsin.
//hocan� �devden beklentisi veriyi gafi�i olut�ruacak veriyi alabiliyor mu? Excel kullanmak 
//diren� bobin de�erlerini sen belirle dene onun g�r�nt�lerini de ziiple bu de�erlerde bu ��kt� �eklinde
