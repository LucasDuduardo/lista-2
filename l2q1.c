#include <stdio.h>

int main(){

    int weekd;
    
    while (1)
    {
        
        puts("insira um numero para ver o dia da semana correspondente: ");
        scanf("%d",&weekd);
        
        if (weekd == 1) puts("domingo");
        else if (weekd == 2) puts("segunda");
        else if (weekd == 3) puts("terça feira");
        else if (weekd == 4) puts("quarta feira");
        else if (weekd == 5) puts("quinta feira");
        else if (weekd == 6) puts("sexta feira");
        else if (weekd == 7) puts("sabado");
        else if (weekd > 7) puts("numero invalido");
        else if (weekd == 0) break;
    }
    
    
    return 0;
       
    }
    
    
        
    
    


