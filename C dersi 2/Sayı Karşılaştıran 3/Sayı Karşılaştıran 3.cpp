#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int x,y,z,enb;
	printf("Wilkommen zur�ck Herr Kilic ^^ \n Bitte schreiben Sie die Zahlen\n");
	printf("Erste zahl= "); scanf("%d",&x);
	printf("Zweite zahl= "); scanf("%d",&y);
	printf("Dritte zahl= "); scanf("%d",&z);
	
	//-------------------------------------------------------------------------------
	
	if(x>y&&x>z) // ACHTUNG!! nur eine " & "macht keine and befehl. Es funktioniert mit zwei " & " (&&).
	{
		enb=x;
	}
	else 
	{
		if(y>z) {
			enb=y;
		}
		else{
			enb=z;
		}
	}
	//-------------------------------------------------------------------------------
	printf("die h�chste Zahl ist= %d",enb);
	
	return(0);
	
}
