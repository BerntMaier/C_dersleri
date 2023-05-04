#include <stdio.h> //#include"stdio.h"

main() {
	int a,b; a=500;
	printf("Degiskenin degeri...: %d \n",a);
	printf("Degiskenin bellek adresi...: %p", &a); //adresi bildiðin otel dairesi gibi düþün. 500 sayýsýný deðiþtir deðiþmiyor bu adres.Pc yi aç kapa deðiþebilir.
}
//not int main (void) yazmadýk. Çýkýþ olmadýðý için return yazmamýzý da istemedi zaten.
