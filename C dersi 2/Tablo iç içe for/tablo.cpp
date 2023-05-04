#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int i,j;
	for(i=1;i<=5;i++) {
		for(j=1;j<=5;j++) {
			printf("%d ",i*j+1); //d den sonraki boþluða dikkat!! koymazsan sayýlar arasýnda boþluk olmuyor
		}
		printf("\n");//bir üstteki satýrdaki printf de \n yazmadýk çünkü istediðimiz tablo þekli çýkmýyor. SÜrekli alt satýra atar
	}
	return(0);
}
