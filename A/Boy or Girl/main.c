#include <stdio.h>

int main(){
    char name[100];
    int len,dis=0,n_dis = 0;
    scanf("%s",name);

    for(int i = 0; i < 100; i++){
        if(name[i] == '\0'){
            len = i;
            break;
        }
    }
    for(int i = 0; i < len; i++){
        for(int j = (i+1); j < len; j++){
            if(name[i] == name[j]){
                n_dis++;
            }
        }
        if(n_dis == 0){
            dis++;
        }else{
            n_dis=0;
            }
    }
            if(dis%2 == 0){
                printf("CHAT WITH HER!");
            }else{
            printf("IGNORE HIM!");
            }

    return 0;
}
