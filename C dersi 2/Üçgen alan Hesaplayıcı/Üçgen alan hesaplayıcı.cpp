#include <stdio.h>
#include <conio.h>
int main (void) 
{
	int a,h;
	float alan;
	
	printf(" W E L C O M E \n Please enter the digits:\n");
	printf("a=?");
	scanf("%d",&a); // �apa i�areti hangi integer'a de�er girelece�ini se�er
	printf("h=?\n"); // \n yaz�y� pirntledikten sonra alt sat�ra ge�mesini s�yler. Yazmazsan yaz�lan �eyler hep yan yana gelir
	scanf("%d",&h);
	alan=(float)(a*h)/2 ; // D�KKAT!!! Burada yaz�lan (float) , inputlar integer olmas�na ra�men yap�lan i�lemin sonucunun float ��kmas�n� sa�lar. alan'�n da float olmas� gerek. Bu nedenle de bu de�eri printlerken de %d de�il %f kullanmal�s�n
	printf("the Result is= %f",alan);
	return(0);
	
	
	
}

