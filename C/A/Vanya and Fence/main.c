#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,h=0,w=0;

    scanf("%d %d",&n,&h);

    int heights[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    for(int i = 0;i < n; i++){
        if(heights[i] <= h){
            w+=1;
        }else{
            w+=2;
        }
    }
    printf("%i",w);

    return 0;
}
