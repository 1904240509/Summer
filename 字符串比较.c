//����ʵ�ֱ�׼�ַ������strcmp���������ַ����ȽϺ������Ӽ������������ַ��������ֵ���Ƚϴ�С��ǰ�ߴ��ں������1��ǰ��С�ں������-1������������0�� 

#include<stdio.h>
#include<string.h>
int strcmp_(char *st1,char *st2);
int main()
{
    char A[100],B[100];
    while(scanf("%s %s",A,B)!=EOF)
    {
        int Num=strcmp_(A,B);
        if(Num>0)
            printf("1\n");
        else
            if(Num<0)
            printf("-1\n");
        else
            printf("0\n");
    }
    return 0;
}
/*****************************************/
int strcmp_(char *st1,char *st2)
{
    for(int i=0;i<strlen(st1)&&i<strlen(st2);i++)
        if(st1[i]!=st2[i])
            return st1[i]-st2[i];
    return strlen(st1)-strlen(st2);
}
