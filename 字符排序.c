//?任意输入一个长度不超过20的字符串，对所输入的字符串，按照ASCII码的大小从小到大进行排序，请输出排序后的结果。

#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    int i,j,b[21],n,t,m;
    scanf("%d",&m);
    getchar();
    while(m--)
    {
        gets(a);
        n=strlen(a);
        for(i=0;a[i]!='\0';i++)
            b[i]=a[i]-'0';  /*此时就是转化为数字形式*/
        for(i=0;i<n-1;i++)/*排序*/
            for(j=i+1;j<n;j++)
                if(b[i]>b[j])
                {
                    t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
        for(i=0;i<n;i++)
        {
            b[i]=b[i]+48;/*再转化为ASCII形式，进行字符串输出*/
            printf("%c",b[i]);
        }
        printf("\n");
    }
    return 0;
}
