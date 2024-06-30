#include <stdio.h>
#include <stdlib.h>

int main()
{
    int games = 0;
    int Anton= 0;
    int Danik = 0;

    scanf("%i",&games);
    char wins[games+1];

    scanf("%s",wins);

    for(int i = 0; i<=games; i++)
    {
        if(wins[i]== 'A')
        {
            Anton++;
        }
        if(wins[i] == 'D')
        {
            Danik++;
        }
    }
    if(Anton > Danik)
    {
        printf("Anton");
    }
    else if(Anton < Danik)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}
