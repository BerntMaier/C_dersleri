#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"Turkish");
	int m,n,i,j,enb,mat[30][30],ctop,ttop,cadet,tadet; float cort,tort;
	printf("Matris kaç satýr kaç sütun olacak?Lütfen sýrayla yazýnýz:\n");
	printf("M= "); scanf("%d",&m); printf("N= "); scanf("%d",&n);
	printf("Lütfen matrisin belirtilen satýr ve sütunlarýna ait deðerleririni giriniz:\n");
	 for(i=0;i<m;i++) {
	 	for(j=0;j<n;j++) {
	 		printf("Matris(%d , %d)---> ",i+1,j+1); scanf("%d",&mat[i][j]);
		 }
	 }
	 ttop=0; tadet=0;   ctop=0; cadet=0;
	 for(i=0;i<m;i++) {
	 	for(j=0;j<n;j++) {
	 		if(mat[i][j]%2==0) {
	 			ctop=ctop+mat[i][j];
	 			cadet=cadet+1;
			}
			else { 
				ttop=ttop+mat[i][j];
				tadet=tadet+1;
			}
		 }
	 }
	 //------------------------------------------------------
	 for(i=0;i<m;i++) { //Ich hatte es ein bischen früh gemacht.Ich wollte die Matirx schreiben
	 	for(j=0;j<n;j++) {
	 		printf("%d ",mat[i][j]);
		 }
		printf("\n");
	 }
	 //-----------------------------------------------------
	cort=(float)ctop/cadet;
	tort=(float)ttop/tadet;
	printf("Çift sayýlarýn ortalamasý=%f\n",cort);
	printf("Tek sayýlarýn ortalamasý=%f",tort);
	return(0);
}
