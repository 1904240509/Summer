//存储一组姓名，如Apple,Tom,Green,Jack 要求按照字典序排序并显示。

#include <stdio.h>
#include <string.h>
int main()
{
    int n,m,i,j;
    char name[10][20],tmp[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%s",name[i]);
        for(i=0;i<m-1;i++)
        {
            for(j=0;j<m-1-i;j++)
            {
                if(strcmp(name[j],name[j+1])>0)//冒泡排序从小到大将字符串进行排列
                {
                //需要注意的是对字符串赋值不可以用赋值号=，而是用函数strcpy进行赋值
                    strcpy(tmp,name[j]);
                    strcpy(name[j],name[j+1]);
                    strcpy(name[j+1],tmp);
                }
            }
        }
        for(i=0;i<m;i++)
            printf("%s\n",name[i]);//逐行输出字符串
    }
    return 0;
}
