#include <stdio.h>
#include <stdlib.h>

// Kullan�c� Tan�ml� �ki Matrisin �arp�m�
//�ncelikle bu k�s�mda matrislerimizin boyutlar�n� belirleyelim.
//Matrislerimizin boyutlar�n� a[M][N] ve b[N][P] olacak �ekilde atama yap�yoruz.

#define M 2  //B�R�NC� matrisin SATIR say�s�
#define N 3  //B�R�NC� matrisin S�TUN ve �K�NC� matrisin SATIR say�s�
#define P 2  //�K�NC� matrisin S�TUN say�s�

int main() {
	
	 int a[10][10],b[10][10],c[10][10]={ },i,j,k; //De�i�kenlerimizi ve matrislerimizi tan�mlad�k.
						//Matris dizimizin i�ini bo� b�rakt�k. ��nk� bu k�sm� a�a��da dolduraca��z.
   
    printf ("Birinci Matris:\n \n");    //�lk matrisimizi kullan�c�dan alal�m.

    for (i = 0; i < M; i++)  //�lk d�ng� sat�r,
	{        					
    	for (j = 0; j < N; j++)  //�kinci d�ng� s�tunu tan�ml�yor.
		{      

        printf ("a[%d][%d]: ",i+1,j+1);      
        scanf ("%d", &a[i][j]);             
   		 }
    }
  
  printf ("\nOlusan Matris: \n");   //Matrisi g�rmek ad�na ekrana bast�ral�m.
  for (i = 0; i < M; i++) 
  {         
    for (j = 0; j < N; j++) 
	{         

        printf("%5d",a[i][j]);
	   
                
    }printf("\n\n"); 
  }
    
    
    
    printf ("\n\nIkinci Matris: \n \n");   //Ayn� i�lemleri ikinci matrisimiz i�in yap�yoruz.  

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
       			
				   
				//Bu k�s�mda �arpma i�lemi ba�l�yor.
    for (i = 0; i < M; i++)     //T�m d�ng�lerimizi burada d�nd�r�yoruz. 
	{       	        //��nk� her iki matrisi de burada i�leme al�yoruz. 
    	for (j = 0; j < P; j++) 
		{       		  
    		for (k = 0; k < N; k++)            

        	c[i][j] += a[i][k] * b[k][j];    //Her bir eleman� tek tek �arp�p toplayarak atama yap�yor.      
   		 }
        printf("\n");
    }

    printf ("Sonuc Matrisi:\n");   //Sonu� matrisimizi ekrana bast�r�yoruz.

    for (i = 0; i < M; i++) //Sonu� Matrisimizin boyutu c[M][P} lik oldu�u i�in sadece iki d�ng�y� kullan�yoruz.
	{            
    	for (k = 0; k < P; k++)      

        printf ("\t%d",c[i][k]);      
        printf ("\n");                
    }
    
    getch();                      
    return 0;                     
}
