#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	float eps,payda,s,terim;  int isaret,x;  long int pay; //long int'ýn bit sayýsý daha fazla. Daha uzun basamaklarý yazmamýzý saðlýyor. Hoca hatýrlatmak için yazdý bu kodda ihtiyaç yok
	printf(" H O Þ  G E L D Ý N Ý Z \nLütfen X deðerini giriniz=\n"); scanf("%d",&x);
	printf("Lütfen Epsilon deðerini giriniz=\n"); scanf("%f",&eps);
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
	printf("Sonuç= %f",s); // ilkine 3 diðerine 0.0001 girince 2.906660 .çýkmalý ama sondaki sayý 7 nedense.
	return(0);
		
}
