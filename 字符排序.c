//?��������һ�����Ȳ�����20���ַ���������������ַ���������ASCII��Ĵ�С��С���������������������Ľ����

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
            b[i]=a[i]-'0';  /*��ʱ����ת��Ϊ������ʽ*/
        for(i=0;i<n-1;i++)/*����*/
            for(j=i+1;j<n;j++)
                if(b[i]>b[j])
                {
                    t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
        for(i=0;i<n;i++)
        {
            b[i]=b[i]+48;/*��ת��ΪASCII��ʽ�������ַ������*/
            printf("%c",b[i]);
        }
        printf("\n");
    }
    return 0;
}
