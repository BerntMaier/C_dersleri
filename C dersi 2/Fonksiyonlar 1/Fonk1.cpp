#include <stdio.h>
#include <conio.h>
#include <locale.h> //mesela math.io ya da kulland���m�z k�t�phaneler de alt fonksiyon oluyor
//��kt� YOK  (   girdi  VAR  )
void yaz (int a, int b) { //g�rd���n �zere void  yaz�ld�. Bu da bir ��k���n olmad���n� s�yl�yormu�. Sonra fonksiyonun ad� ve parantez i�ine de giri�ileri yazd�k.
	printf("%d %d\n",a,b);
	
}
//��kt� VAR (girdi YOK)     
int main(void) { //int da zaten ��k���n oldu�unu belirtiyormu� san�r�m.
	setlocale(LC_ALL,"Turkish");
	int x=5 , y=7;
	yaz(x,y);
	yaz(x+5,x+y);
	return(0);
	//g�r�ld��� �zere �stte de var yok �eklinde belirtti�imiz en soldaki int ve void yaz�lar� ��kt�y�, parantez i�indekileri girdi'i belirtiyor void yok demek oldu .
}
