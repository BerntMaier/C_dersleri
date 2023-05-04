#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"German");
	int i,j,n,A[50],B[50];
	printf("Wie viele Zahl möchten Sie schreiben?\n"); scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("Bitte schreiben Sie die %d. Zahl:\n",(i+1));  scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++) {
			B[i]=0; 
			for(j=0;j<=i;j++) {
				B[i]=A[j]+B[i];
		}
	}
	for(i=0;i<n;i++) {
		printf("%4d  %4d\n",A[i],B[i]);
	}
	
	return(0);
}
