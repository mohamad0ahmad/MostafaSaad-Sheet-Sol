#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf("%i",&n);
    int P,V,T;
    int implemented = 0;

    for(int i = 0; i < n; i++){
        scanf("%i %i %i",&P,&V,&T);

        if((P+V+T)>= 2){
            implemented++;
        }
    }
    printf("%i",implemented);
    return 0;
}
