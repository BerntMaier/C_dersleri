#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	//While döngüsünde söz konusunu koþul saðlanýnca ve saðlandýðý sürece  belirtilen komutlar yapýlmaya devam eder. while(koþul) { komutlar;}
	int x,c;
	c=0;
	x=3;
	while(c<3) { //c , 3 den küçük olduðu sürece bu komutu gerçekleþtiriyor. c==3 olduktan sonra býrakýyor. c<=3 deseydik c==3 de de yapacaktý yani bir adým daha gidip c=4 olunca býrakýyor.
		printf("c=%d  ,  x=%d \n",c,x);
		x=x*x; c=c+1;
		
	}
	printf("die Schleife ist fertig \n");
	printf("c=%d  ,  x=%d",c,x);
	return(0);
}
