#include <stdio.h>
#include <conio.h>
#include <locale.h>
// bu kod girilen matrisin sütunlarýný toplayýp çýkartýyor
int main(void) { // kod çalýþmýyor!!! 26 aralýktaki derste hoca bunu ilk  yapacaðýný söyledi.
	setlocale(LC_ALL,"Turkish");
	int i,j,n,mat[30][30],a[30];
	printf("Satýr ve sütun Sayýsý= "); scanf("%d",&n);
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
	printf("Sonuç= %d",a[n]);
	return(0);
}
