#include<stdio.h>
#include<conio.h>
//Bu algoritmanın karmaşıklığı n dir.
int us(int x,int y){  
  int i,a=1;
  for(i=1;i<=y;i++){ 
     a=a*x;             
} 
return a;
   
}
int main()
{  
    int x,y,sonuc;
   
  printf("\nUs alma ");
  printf("\n x = ");
  scanf("%d",&x);
  printf("\n y = ");
  scanf("%d",&y);   
  sonuc=us(x,y);
  printf("\n \n sonuc = %d ",sonuc); 
   getch();
   return 0;
}
