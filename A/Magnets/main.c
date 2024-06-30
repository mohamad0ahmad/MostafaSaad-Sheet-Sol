#include <stdio.h>


int main()
{
    int n;
    int g = 0;
    scanf("%i",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            g++;
        }
    }
    printf("%i",g);
    return 0;
}
