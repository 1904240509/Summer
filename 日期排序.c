//有一些日期，日期格式为“MM/DD/YYYY”。编程将其按日期大小排列。

#include<stdio.h>
#include<string.h>
 
#define NX 100
#define NY 13
 
int exchage(char *a, char *b)
{
    char str[16];
    memset(str, 0, sizeof(str));
    strcpy(str, a);
    strcpy(a, b);
    strcpy(b, str);
}
 
int main()
{
    char days[NX][NY];
    int i=0, j, k, M, D, Y, M1, D1, Y1;
    while(1)
    {
        memset(days[i], 0, sizeof(days[0]));
        if(EOF == scanf("%s", days[i]))
            break;
        i++;
    }
    for(j = 0; j < i-1; j++)
    {
        if(3 == sscanf(days[j], "%d/%d/%d", &M, &D, &Y))
        {
            for(k = j+1; k < i; k++)
            {
                if(3 == sscanf(days[k], "%d/%d/%d", &M1, &D1, &Y1))
                {
                    if(Y>Y1)
                    {
                        exchage(days[j], days[k]);
                    }
                    else if(Y==Y1 && M>M1)
                    {
                        exchage(days[j], days[k]);
                    }
                    else if(Y==Y1 && M==M1 && D>D1)
                    {
                        exchage(days[j], days[k]);
                    }
                }
 
            }
        }
    }
    for(j = 0; j < i; j++)
    {
        printf("%s\n", days[j]);
    }
    return 0;
}
