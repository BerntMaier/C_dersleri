#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Turkish");
	int i,toplam,n;
	printf("Ka�a kadar toplayal�m?\n");  scanf("%d",&n);
	for(i=1;i<=n;i++){
		toplam=toplam+i;
	}
	printf("Toplam=%d",toplam);
	return(0);
	
}
