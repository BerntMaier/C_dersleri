#include <stdio.h>
#include <conio.h>
#define pi 3.14  // pi yi 3.14 olarak kabul etti. Not: # koyulan ifadelerde sona ; gerekmez
int main(void) 
{

	float r,cevre,alan;
	printf(" W E L C O M E \n Please enter the inputs:\n"); 
	printf("r=");  scanf("%f",&r);
	cevre= 2*pi*r ; alan=pi*r*r ;
	printf("results=\n Cevre= %f metredir  Alan= %f metrekaredir",cevre,alan); //iki deðeri ayrý ayrý print komutu ile yazmak yerine bu þekilde tek komutta printeleyebilirsin.
	
	return(0);
	
}
