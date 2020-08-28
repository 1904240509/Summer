//所给字符串正序和反序连接，形成新串并输出

#include<stdio.h>

#include<string.h>

int main()

{

char s[50],s1[100],t;//定义两个数组。

int i=0,len;

gets(s);//输入你想处理的字符串

strcpy(s1,s);//将输入的字符串拷贝到另外一个字符串里面

len=strlen(s);得到这个字符串数组长度

len-=1;

while(i<len)//对这个字符串逆序

{

t=s[i];

s[i]=s[len];

s[len]=t;

i++;

len--;

}

strcat(s1,s);//再将正反两个字符串连接到一起

puts(s1);//输出连接后的字符串

    return 0;

}




