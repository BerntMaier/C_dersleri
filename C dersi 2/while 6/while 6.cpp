#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	float eps,payda,s,terim;  int isaret,x;  long int pay; //long int'�n bit say�s� daha fazla. Daha uzun basamaklar� yazmam�z� sa�l�yor. Hoca hat�rlatmak i�in yazd� bu kodda ihtiya� yok
	printf(" H O �  G E L D � N � Z \nL�tfen X de�erini giriniz=\n"); scanf("%d",&x);
	printf("L�tfen Epsilon de�erini giriniz=\n"); scanf("%f",&eps);
	isaret=-1;
	pay=1;
	payda=x;
	s=x;
	do {
		pay=pay+2;
		payda=payda*x*x;
		terim=(float)pay/payda;
		s=s+isaret*terim;
		isaret=isaret*(-1);
	} while(fabs(terim)>eps);
	printf("Sonu�= %f",s); // ilkine 3 di�erine 0.0001 girince 2.906660 .��kmal� ama sondaki say� 7 nedense.
	return(0);
		
}
