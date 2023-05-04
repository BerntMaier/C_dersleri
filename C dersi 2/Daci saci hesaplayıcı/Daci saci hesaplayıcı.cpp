#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	//wenn es 3  nach 15 uhr ist, rechnet es den Winkel 7.5 
	int saat,dakika;
	float daci,saci,aci;
	
	printf(" Wilkommen zurüc Herr Kilic \n Bitte schreiben Sie die graden:\n ");
	printf("Uhr= "); scanf("%d",&saat);
	printf("Minute= "); scanf("%d",&dakika);
	//-----------------------------------------
	daci=dakika*6 ; saci= saat*30+dakika*0.5 ;
	//-----------------------------------------
	if(daci>saci) 
	{
		aci=daci-saci;
	}
	else 
	{
		aci=saci-daci;
	}
	if(aci>180) 
	{
		aci=aci-180;
	}
	printf("der Winkel ist= %f",aci);
	return(0);
	
}
