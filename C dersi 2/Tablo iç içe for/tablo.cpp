#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int i,j;
	for(i=1;i<=5;i++) {
		for(j=1;j<=5;j++) {
			printf("%d ",i*j+1); //d den sonraki bo�lu�a dikkat!! koymazsan say�lar aras�nda bo�luk olmuyor
		}
		printf("\n");//bir �stteki sat�rdaki printf de \n yazmad�k ��nk� istedi�imiz tablo �ekli ��km�yor. S�rekli alt sat�ra atar
	}
	return(0);
}
