//�ַ��������ڼ�������кܶิ�ӵĲ�����������Щ���ӵĲ��������ɻ������ַ����������϶��ɣ�Ҫ���дһ�ַ����ߵ��ĳ��򣬰��ַ����е��ַ��ߵ�λ�á�

#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],t;
    gets(a);
    int i,j,k;
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        t=a[i],a[i]=a[j],a[j]=t;
    }
    printf("%s",a);
}
