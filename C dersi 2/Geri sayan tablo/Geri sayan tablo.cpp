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
		for(j=i;j>=1;j--) { //j azalsın istediğimizden j-- veya j-1 yazıyoruz.j<=1 yazmamızın sebebi i sayısından 1 olana kadar azalmasını isityoruz bundan dolayı 1 var orada
			printf("%d ",j);
		}
	printf("\n");
	}
	return(0);
}
