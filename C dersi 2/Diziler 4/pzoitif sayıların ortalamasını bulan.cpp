#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int n,i,a[100],t,payda;  float ort;
	
	printf("Ka� tane say� girilecek?\n"), scanf("%d",&n);
	printf("----------------------------\n");
	for(i=0;i<n;i++) {
		printf("L�tfen %d. say�y� giriniz:\n",(i+1)); scanf("%d",&a[i]);
	}
	t=0;  payda=0;
	for(i=0;i<n;i++) {
		if(a[i]>0) {
			t=t+a[i];  
			payda=payda+1;
		}	
	}
	ort=((float)t/payda); //float yazarken mesela b�lmeyi (float) (a/b) yaparsan olmuyor ((float)a/b) yap.
	printf("----------------------------\n");
	//printf("Payda= %d   ",payda); printf("Toplam= %d\n",t);   //( toplam ve payday� kontrol etmek i�in)
	printf("Girilen pozitif say�lar�n ortalamas�=  %f ",ort);
	return(0);
}
