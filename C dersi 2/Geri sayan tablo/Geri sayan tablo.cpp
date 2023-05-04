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
		for(j=i;j>=1;j--) { //j azalsýn istediðimizden j-- veya j-1 yazýyoruz.j<=1 yazmamýzýn sebebi i sayýsýndan 1 olana kadar azalmasýný isityoruz bundan dolayý 1 var orada
			printf("%d ",j);
		}
	printf("\n");
	}
	return(0);
}
