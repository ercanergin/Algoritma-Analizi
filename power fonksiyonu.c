#include <stdio.h>
#include <stdlib.h>
// Kodun karmaþýklýðý O(n)'dir.
int power(int a,int b){
    int toplam=1;
    for(int i=0;i<b;i++){
        toplam *=a;
    }
    return toplam;

}
int main(){
    int sonuc=power(4,5);
    print(sonuc);
    return 0;
}



