#include <stdio.h> //#include"stdio.h"

main() {
	int a,b; a=500;
	printf("Degiskenin degeri...: %d \n",a);
	printf("Degiskenin bellek adresi...: %p", &a); //adresi bildi�in otel dairesi gibi d���n. 500 say�s�n� de�i�tir de�i�miyor bu adres.Pc yi a� kapa de�i�ebilir.
}
//not int main (void) yazmad�k. ��k�� olmad��� i�in return yazmam�z� da istemedi zaten.
