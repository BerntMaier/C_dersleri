#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int i,n,A[50],B[50],sc;
	printf("Ka� tane de�er girilecek?\n"); scanf("%d",&n);  
	sc=0; //�nce ilk iki for d�ng�s� ile n tane A ve B dizisi i�in data al�yoruz. Bu �ekilde kod yaz�nca �nce A dizisinin sonra B dizisinin elemanlar�n� giriyoruz.
	for(i=0;i<n;i++){
		
		printf("A dizisinin %d. eleman�n� giriniz: ",i);  scanf("%d",&A[i]); 
		
	}
	for (i=0;i<n;i++) { //bu for d�ng�s� girilen A ve B dizilerin s�rayla A[1] ve B[1] de�erleri , A[2] ve B[2] de�erleri...... ile i�lem yap�yor.
		
		printf("B dizisinin %d. eleman�n� giriniz: ",i);   scanf("%d",&B[i]);
		
	}
	for(i=0;i<n;i++) {// bir sonraki uygulamalar i�in ek bilgi: int a[]={3,4,6,7,9} ([5} �eklinde de yazabilirsin] �eklide yazarsak a[0], a[1] ... in ne oldu�unu kodun i�inde girmi� oluyoruz.
		
		sc=sc+A[i]*B[i];
		
	}
	printf("Sonu�=  %d",sc);
	
	return(0);
}
