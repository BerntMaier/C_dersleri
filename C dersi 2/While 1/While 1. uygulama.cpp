#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	//While d�ng�s�nde s�z konusunu ko�ul sa�lan�nca ve sa�land��� s�rece  belirtilen komutlar yap�lmaya devam eder. while(ko�ul) { komutlar;}
	int x,c;
	c=0;
	x=3;
	while(c<3) { //c , 3 den k���k oldu�u s�rece bu komutu ger�ekle�tiriyor. c==3 olduktan sonra b�rak�yor. c<=3 deseydik c==3 de de yapacakt� yani bir ad�m daha gidip c=4 olunca b�rak�yor.
		printf("c=%d  ,  x=%d \n",c,x);
		x=x*x; c=c+1;
		
	}
	printf("die Schleife ist fertig \n");
	printf("c=%d  ,  x=%d",c,x);
	return(0);
}
