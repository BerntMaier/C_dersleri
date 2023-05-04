#include <stdio.h>
#include <conio.h>
#include <locale.h> //mesela math.io ya da kullandýðýmýz kütüphaneler de alt fonksiyon oluyor
//çýktý YOK  (   girdi  VAR  )
void yaz (int a, int b) { //gördüðün üzere void  yazýldý. Bu da bir çýkýþýn olmadýðýný söylüyormuþ. Sonra fonksiyonun adý ve parantez içine de giriþileri yazdýk.
	printf("%d %d\n",a,b);
	
}
//çýktý VAR (girdi YOK)     
int main(void) { //int da zaten çýkýþýn olduðunu belirtiyormuþ sanýrým.
	setlocale(LC_ALL,"Turkish");
	int x=5 , y=7;
	yaz(x,y);
	yaz(x+5,x+y);
	return(0);
	//görüldüðü üzere üstte de var yok þeklinde belirttiðimiz en soldaki int ve void yazýlarý çýktýyý, parantez içindekileri girdi'i belirtiyor void yok demek oldu .
}
