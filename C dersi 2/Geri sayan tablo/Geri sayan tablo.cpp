#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int i,j,n;
	printf("Bitte schreiben Sie die Zahl n="); printf("^^");
	scanf("%d",&n);
	printf("Verstanden!");
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--) { //j azals�n istedi�imizden j-- veya j-1 yaz�yoruz.j<=1 yazmam�z�n sebebi i say�s�ndan 1 olana kadar azalmas�n� isityoruz bundan dolay� 1 var orada
			printf("%d ",j);
		}
	printf("\n");
	}
	return(0);
}
