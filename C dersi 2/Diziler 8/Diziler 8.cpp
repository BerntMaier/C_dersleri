#include <stdio.h>
#include <conio.h>
#include <locale.h>
// bu kod girilen matrisin s�tunlar�n� toplay�p ��kart�yor
int main(void) { // kod �al��m�yor!!! 26 aral�ktaki derste hoca bunu ilk  yapaca��n� s�yledi.
	setlocale(LC_ALL,"Turkish");
	int i,j,n,mat[30][30],a[30];
	printf("Sat�r ve s�tun Say�s�= "); scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("Matris(%d,%d)---> ",i+1,i+1); scanf("%d",mat[i][i]);
	}
	for (i=0;i<n;i++) {
		a[i]=0;
	}
	for (i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			a[j]=a[j]+mat[i][j];
		}
	}
	printf("Sonu�= %d",a[n]);
	return(0);
}
