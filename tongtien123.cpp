#include <stdio.h>
#include "math.h"
 
int main () {
	
	#define tien 500
	
   int  tien1, tien2, tongtien1, tongtien2 ;
   int hoivien  ;
   

   
   
   printf ("\n hay nhap 1 neu ban la hoi vien \n hay nhap 0 neu ban khong phai la hoi vien ");
   scanf ("\n %d", &hoivien);
   
   
   
   //giatien1cuontrongngay20/11
   
	tien1 = tien * 20 / 100  ;
	//giatientrongngay20/11
	tien2= tien - tien1;
   
   //tongsotienkhimua10cuon
   tongtien1= 10 * tien;
   //tongsotienkhimua10cuonvaongay20/11
   tongtien2= 10 * tien2;
   
   if (  hoivien == 1 ) {
   		printf ("\n so tien ban phai tra la = %d ", tongtien2);
   	
   	} 
   else if ( hoivien == 0) {
   
   		printf ("\n so tien ban phai tra la = %d", tongtien1);
   } else {
   	 printf ( "\n hay nhap 1 hoac 0");
   }
   
}
