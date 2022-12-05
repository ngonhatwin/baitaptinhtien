#include <stdio.h>
#include "math.h"
 
int main () {
	
	#define tien 500
	
   int  tien1, tien2, tongtien1, tongtien2 ;
   int hoivien  ;
   

   
   
   printf ("\n hay nhap 1 neu ban la hoi vien \n hay nhap 0 neu ban khong phai la hoi vien ");
   scanf ("\n %d", &hoivien);
   
   
   
   //gia tien dc giam trong nga y20/11
   
	tien1 = tien * 20 / 100  ;
   //gia tien 1 cuon trong ngay 20/11
	tien2= tien - tien1;
   
   //tong so tien khi mua 10 cuon
   tongtien1= 10 * tien;
   //tong so tien khi mua 10 cuon vao ngay 20/11
   tongtien2= 10 * tien2;
   //truong hop la hoi vien
   if (  hoivien == 1 ) {
   		printf ("\n so tien ban phai tra la = %d ", tongtien2);
   	
   	}
   //truong hop khong phai la hoi vien
   else if ( hoivien == 0) {
   
   		printf ("\n so tien ban phai tra la = %d", tongtien1);
   } else {
   	 printf ( "\n ban co muon tro thanh hoi vien khong");
   }
   
}
