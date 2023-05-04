#include <stdio.h>
#include <conio.h>
#include <locale.h>

float faktoriyel(int);
float us(int, int);
float faktoriyel (int k) {
	int i;
	float f;
	f=1;
	for(i=2;i<=k;i++) {
		f=f*i;
	}
	return(f);
}
float us (int x, int n) {
	int i;
	float f=x;
	for(i=2;i<=n;i++) {
		f=f*x;
	}
	return(f);
}
int main(void) {
	int i,n,x; float e;
	printf("n...: "); scanf("%d",&n);
	printf("x...: "); scanf("%d",&x);
	e=1;
	for(i=1;i<=n;i++) {
		e=e+us(x,i) /faktoriyel(i);
		
	}
	printf("e uzeri %d =%f",x,e);
		getch();
		return(0);
}
