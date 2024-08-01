#include <stdio.h>

int main()
{


    char str[100];
    int ucase = 0,lcase = 0;

    scanf("%s",str);

    for(int i = 0; i < 100; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lcase++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ucase++;
        }
    }
    if(ucase > lcase)
    {
        for(int i = 0; i < 100; i++)
        {
            if(str[i] == '\0')
            {
                break;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }

        }

    }
    else
    {
        for(int i = 0; i < 100; i++)
        {
            if(str[i] == '\0')
            {
                break;
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }

        }



    }

    printf("%s",str);
    return 0;
}
