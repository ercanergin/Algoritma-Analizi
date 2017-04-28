#include <stdio.h>
#include <stdlib.h>

// Kullanýcý Tanýmlý Ýki Matrisin Çarpýmý
//Öncelikle bu kýsýmda matrislerimizin boyutlarýný belirleyelim.
//Matrislerimizin boyutlarýný a[M][N] ve b[N][P] olacak þekilde atama yapýyoruz.

#define M 2  //BÝRÝNCÝ matrisin SATIR sayýsý
#define N 3  //BÝRÝNCÝ matrisin SÜTUN ve ÝKÝNCÝ matrisin SATIR sayýsý
#define P 2  //ÝKÝNCÝ matrisin SÜTUN sayýsý

int main() {
	
	 int a[10][10],b[10][10],c[10][10]={ },i,j,k; //Deðiþkenlerimizi ve matrislerimizi tanýmladýk.
						//Matris dizimizin içini boþ býraktýk. Çünkü bu kýsmý aþaðýda dolduracaðýz.
   
    printf ("Birinci Matris:\n \n");    //Ýlk matrisimizi kullanýcýdan alalým.

    for (i = 0; i < M; i++)  //Ýlk döngü satýr,
	{        					
    	for (j = 0; j < N; j++)  //Ýkinci döngü sütunu tanýmlýyor.
		{      

        printf ("a[%d][%d]: ",i+1,j+1);      
        scanf ("%d", &a[i][j]);             
   		 }
    }
  
  printf ("\nOlusan Matris: \n");   //Matrisi görmek adýna ekrana bastýralým.
  for (i = 0; i < M; i++) 
  {         
    for (j = 0; j < N; j++) 
	{         

        printf("%5d",a[i][j]);
	   
                
    }printf("\n\n"); 
  }
    
    
    
    printf ("\n\nIkinci Matris: \n \n");   //Ayný iþlemleri ikinci matrisimiz için yapýyoruz.  

    for (j = 0; j < N; j++) 
	{          
   		 for (k = 0; k < P; k++) 
		{          

        printf ("b[%d][%d]: ",j+1,k+1);      
        scanf ("%d", &b[j][k]);             
	    }
	}
    
    printf ("\nOlusan Matris: \n");     
  for (j = 0; j < N; j++) 
  {         
    for (k = 0; k < P; k++) 
	{         

        printf("%5d",b[j][k]);
	   
                
    }printf("\n\n"); 
    }
       			
				   
				//Bu kýsýmda çarpma iþlemi baþlýyor.
    for (i = 0; i < M; i++)     //Tüm döngülerimizi burada döndürüyoruz. 
	{       	        //Çünkü her iki matrisi de burada iþleme alýyoruz. 
    	for (j = 0; j < P; j++) 
		{       		  
    		for (k = 0; k < N; k++)            

        	c[i][j] += a[i][k] * b[k][j];    //Her bir elemaný tek tek çarpýp toplayarak atama yapýyor.      
   		 }
        printf("\n");
    }

    printf ("Sonuc Matrisi:\n");   //Sonuç matrisimizi ekrana bastýrýyoruz.

    for (i = 0; i < M; i++) //Sonuç Matrisimizin boyutu c[M][P} lik olduðu için sadece iki döngüyü kullanýyoruz.
	{            
    	for (k = 0; k < P; k++)      

        printf ("\t%d",c[i][k]);      
        printf ("\n");                
    }
    
    getch();                      
    return 0;                     
}
