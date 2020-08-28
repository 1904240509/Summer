/*依旧是字符串处理，设A和B是两个字符串。我们要用最少的字符操作次数，将字符串A转换为字符串B。这里所说的字符操作共有三种： 


1. 删除一个字符； 
2. 插入一个字符； 
3. 将一个字符改为另一个字符。 
对任给的两个字符串A和B，计算出将字符串A变换为字符串B所用的最少字符操作次数。*/

#include<stdio.h>
#include<string.h>//字符串头文件
int main()
{
    char a[201];//a是要修改的字符串
    char b[201]；//b是模板字符串
    char*pt;//字符指针
    int i；
    int t = 0；//记录修改次数
    int j;//求a与b哪个字符串较小
    pt = a;//指向字符串a的首地址
    scanf("%s%s", a, b);
    j = strlen(a)>strlen(b) ? strlen(b) : strlen(a);
    for (i = 0; i<j; i++)
    {
        if (a[i] != b[i])
        {
            t++;//记录a,b相同下标，不同的字符个数
        }
    }
    if (strlen(b)>strlen(a))
    {//如果模板串比修改字符串长，那么就是：t
        printf("%d\n", t);
    }
    else
    {//这里滴 i==j 想想为什么？
        if (strchr(pt + i, b[i - 1]))//后面有相同的字符，要减1
            printf("%d", t + strlen(a) - strlen(b) - 1);
        else
            printf("%d", t + strlen(a) - strlen(b));
    }
    return 0;
}
