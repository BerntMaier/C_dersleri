#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int i,j,m,n,enb,sat,sut,mat[30][30];
	printf("Wie viele M und N wird die Matrix hat?\nM= ");  scanf("%d",&m); //sat�r
	printf("N= "); scanf("%d",&n);
	
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) { 
			printf("Bitte schreiben Sie die Zahlen von: Matrix[%d,%d]-->",i,j); scanf("%d",&mat[i][j]);
		}// burada 0,0 dan ba�l�yor a�a��da en b�y�k say�n�n bulundu�u sat�r ve s�tun budur derken 0. sat�r 0. s�tun demesin diye i+1 j+1 yazd�rm��t�k. Burada d�zeltmeye vakit bulamad�k o y�zden kald� ama istersen d�zeltebilirsin
	}
	enb=mat[0][0];
	sat=0;  sut=0;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			if(enb<mat[i][j]) {
				enb= mat[i][j];
				sat=i;  sut=j;
			}
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("%6d",mat[i][j]);
		}
		printf("\n");
	}
	printf("die hochste Zahl= %d \n",enb);
	printf("Welche sat�r? --> %d \n",sat+1);
	printf("Welche s�tun? --> %d \n",sut+1);
	return(0);
}
