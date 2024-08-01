#include <stdio.h>

int main()
{
    int Sereja = 0,Dima = 0;
    int n;
    scanf("%i",&n);
    int arr[n];
    int j = n-1;
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if((i%2) == 0)
        {
            if(arr[k] > arr[j])
            {
                Sereja += arr[k];
                k++;
            }
            else if(arr[k] < arr[j])
            {
                Sereja += arr[j];
                j--;
            }
            else
            {
                Sereja += arr[k];
            }

        }
        else if((i%2) == 1)
        {
            if(arr[k] > arr[j])
            {
                Dima += arr[k];
                k++;
            }
            else if(arr[k] < arr[j])
            {
                Dima += arr[j];
                j--;
            }
            else
            {
                Dima += arr[k];
            }

        }


    }
    printf("%i %i",Sereja,Dima);

    return 0;
}
