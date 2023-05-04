#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	float s,i;   int n,isaret;
	printf("Wie viele mal möchten Sie das machen?\n"); scanf("%d",&n);
	s=1; i=3; isaret=-1; //Achtung! Du muss die Zahl mit 1.0 schreiben sodass es funktioniert kann.
	while(i<=n) {
		s=s+isaret*(1/i); 
		i=i+2;
		isaret=isaret*(-1); 
	}
	s=s*4;
	printf("die Antwort ist pi= %f",s); //wenn sie 11111 schreibt, ist die Antwort  3.141417.
	return(0);
}
