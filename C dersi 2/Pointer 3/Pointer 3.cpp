#include <stdio.h>

main() {
	int a=500;
	int *b; //b diye pointer var diyor
	
	b=&a;
	printf("DEgiskein degeri..:%d \n",*b); //*b dediğinde b adresindekii veriyi yaz demek
	printf("Degiskenin bellek adresi..:%p",&b);
}

// fprintf(işaretçi, biçimlendirme tanımları,değişken);
