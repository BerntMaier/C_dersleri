#include <stdio.h>

main() {
	FILE *dosya;
	int i;
	dosya=fopen("test.txt","w"); // w veriyi yaz kaydet demek write dan geliyor. r deseydik readable oalcaktý sadece test.txt adýndaki dosyayý alýp okuyacaktý  //fopen file open demek. test.txt adýna bir text dosyasý aç demek.
	for(i=1;i<6;i++) {
		fprintf (dosya, "%3d\n",i);
	}
	fclose(dosya); //bu cpp dosyasýný kaydetiðni yere not defteri açtý
}


// fprintf(iþaretçi, biçimlendirme tanýmlarý,deðiþken);
//excel de metinden veri al diye bir seçnek var sol üstte. ORadan excele yansýtabiliyorsun
//mesela aný addaki text dosyasýna  for i=8;i<12;i++ dersen önceki doosyayý silip yeni dosyayý getiriyor
//ödevde d 1000 lik bir dizi olsa bu for döngüsündeki gibi atayabilirsin.
//hocaný ödevden beklentisi veriyi gafiði olutþruacak veriyi alabiliyor mu? Excel kullanmak 
//direnç bobin deðerlerini sen belirle dene onun görüntülerini de ziiple bu deðerlerde bu çýktý þeklinde
