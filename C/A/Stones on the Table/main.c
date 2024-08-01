#include <stdio.h>

int main(){
    int n,k=0;
    scanf("%i",&n);
    char arr[n];
    scanf("%s",arr);
    for(int i = 0; i < (n-1); i++){
        if(arr[i] == arr[i+1]){
            k++;
        }
    }
    printf("%i",k);

    return 0;
}
