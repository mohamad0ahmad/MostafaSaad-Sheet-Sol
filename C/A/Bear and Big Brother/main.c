#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,years= 1;
    scanf("%i %i",&a,&b);
    for(years ; years < 99 ;years++){
        a *=3;
        b *=2;
        if(a > b){
            break;
        }
    }

    printf("%i",years);
    return 0;
}
