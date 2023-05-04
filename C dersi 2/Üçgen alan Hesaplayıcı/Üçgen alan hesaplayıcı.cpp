#include <stdio.h>
#include <conio.h>
int main (void) 
{
	int a,h;
	float alan;
	
	printf(" W E L C O M E \n Please enter the digits:\n");
	printf("a=?");
	scanf("%d",&a); // çapa iþareti hangi integer'a deðer gireleceðini seçer
	printf("h=?\n"); // \n yazýyý pirntledikten sonra alt satýra geçmesini söyler. Yazmazsan yazýlan þeyler hep yan yana gelir
	scanf("%d",&h);
	alan=(float)(a*h)/2 ; // DÝKKAT!!! Burada yazýlan (float) , inputlar integer olmasýna raðmen yapýlan iþlemin sonucunun float çýkmasýný saðlar. alan'ýn da float olmasý gerek. Bu nedenle de bu deðeri printlerken de %d deðil %f kullanmalýsýn
	printf("the Result is= %f",alan);
	return(0);
	
	
	
}

