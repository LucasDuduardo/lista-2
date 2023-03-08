#include <stdio.h>

int main(){
    
    int weekd;
    
    do
    {
        printf("insira um numero ");
        scanf("%d",&weekd);

        switch (weekd)
        {
        case 1:
            puts("domingo");
            break;
        case 2:
            puts("segunda feira");
            break;
        case 3:
            puts("terça feira");
            break;
        case 4:
            puts("quarta feira");
            break;
        case 5:
            puts("quinta feira");
            break;
        case 6:
            puts("sexta feira");
            break;
        case 7:
            puts("sábado");
            break;
        default:
            puts("numero invalido");
        
        }
    } while (weekd != 0);
    



    return 0;
}
    


