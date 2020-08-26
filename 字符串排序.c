//输入三个字符串，按由小到大的顺序输出

#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[3][128], tmp[128];
    int i, j;
    for(i=0; i<3; i++)
    {
        scanf("%s", a[i]);
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                memset(tmp, 0, sizeof(tmp));
                strcpy(tmp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], tmp);
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}

