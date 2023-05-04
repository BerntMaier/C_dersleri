#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"German");
	
	int x,y,z,enb;
	printf("Wilkommmen zurück Herr Kilic\n Bitte ergänzen Sie die Graden\n");
	printf("erste grade= "); scanf("%d",&x);
	printf("zweite grade= "); scanf("%d",&y);
	printf("dritte grade= "); scanf("%d",&z);
	
	if(x>y) {
		if(x>z) {
			enb=x;
		}	
}
    	else {
    		if(y>z) {
    		enb=y;
			}
	else {
			enb=z;
		}
	}
	
	printf("die Höchste Grade ist= %d",enb);
	return(0);
}

