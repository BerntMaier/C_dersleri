#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int i,n,A[50],B[50],sc;
	printf("Kaç tane deðer girilecek?\n"); scanf("%d",&n);  
	sc=0; //Önce ilk iki for döngüsü ile n tane A ve B dizisi için data alýyoruz. Bu þekilde kod yazýnca önce A dizisinin sonra B dizisinin elemanlarýný giriyoruz.
	for(i=0;i<n;i++){
		
		printf("A dizisinin %d. elemanýný giriniz: ",i);  scanf("%d",&A[i]); 
		
	}
	for (i=0;i<n;i++) { //bu for döngüsü girilen A ve B dizilerin sýrayla A[1] ve B[1] deðerleri , A[2] ve B[2] deðerleri...... ile iþlem yapýyor.
		
		printf("B dizisinin %d. elemanýný giriniz: ",i);   scanf("%d",&B[i]);
		
	}
	for(i=0;i<n;i++) {// bir sonraki uygulamalar için ek bilgi: int a[]={3,4,6,7,9} ([5} þeklinde de yazabilirsin] þeklide yazarsak a[0], a[1] ... in ne olduðunu kodun içinde girmiþ oluyoruz.
		
		sc=sc+A[i]*B[i];
		
	}
	printf("Sonuç=  %d",sc);
	
	return(0);
}
