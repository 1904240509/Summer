//�����ַ�������ͷ������ӣ��γ��´������

#include<stdio.h>

#include<string.h>

int main()

{

char s[50],s1[100],t;//�����������顣

int i=0,len;

gets(s);//�������봦����ַ���

strcpy(s1,s);//��������ַ�������������һ���ַ�������

len=strlen(s);�õ�����ַ������鳤��

len-=1;

while(i<len)//������ַ�������

{

t=s[i];

s[i]=s[len];

s[len]=t;

i++;

len--;

}

strcat(s1,s);//�ٽ����������ַ������ӵ�һ��

puts(s1);//������Ӻ���ַ���

    return 0;

}




