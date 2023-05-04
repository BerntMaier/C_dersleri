#include <stdio.h>
#include <conio.h>
#include <locale.h>

void P1(int,int);
void P2(int,int,int);
// Bu üstte yazdýklarýmýz herhangi bir kod deðil sadece Kullanýcýnýn P1 ve P2 gibi fonksiyonun olduðunu ve içinde int lar olduðunu söylüyor.
void P1(int x,int y) {
	int z;
	x=x+1;   y=y+x;   z=x+y;
	printf("%d\n",z);
}

void P2(int a, int b, int c) {
	int i , s=0;
	for(i=1;i<=a;i++) {
		s=(b*c)+s;
	}
	P1(a,s);	
}

int main(void) {
	int k=3, l=2;
	P1(k,l);   P2(k,l,k+l);
	return(0);
}
