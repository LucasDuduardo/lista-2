#include <stdio.h>

int main(){

    int jage = 150, page = 110, year = 0;

    while (jage >= page)
    {
        jage += 2;
        page += 3;
        year++;
    }
    
    printf("pedro superará josé em altura em %d anos",&year);
    


}
