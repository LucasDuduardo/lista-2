#include <stdio.h>

int main(){

    int a, fata = 1;

    puts("digite um numero para ver seu fatorial");
    scanf("%d",&a);

    for(int i = 1; i <= a; i++)
   {
    fata *= i; 
   }
   
    printf("o numero %d! é igual a: %d\n",a,fata);

    return 0;



   
    

}
