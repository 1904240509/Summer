/*新生舞会开始了。n名新生每人有三个属性：姓名、学号、性别。
其中，姓名用长度不超过20的仅由大小写字母构成的字符串表示，学号用长度不超过10的  仅由数字构成的字符串表示，性别用一个大写字符‘F’或‘M’表示。
任意两人的姓名、学号均互不相同。
换言之，每个人可被其姓名或学号唯一确定。
给出m对  两人的信息（姓名或学号），判断他们是否能共舞。两人能共舞的充要条件为两人性别相异。 */

#include<stdio.h>
#include<string.h>
struct stu
{
char name[1002];
char  num[1002];
char gender;
};
int main() 
{
    struct   stu  a[1002];
    int n,i,j,k;
    int m;
    char x[1002],y[1002];
    int p1,p2;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s %s         %c",a[i].name,a[i].num,&a[i].gender);
    scanf("%d",&m);
    //getchar();
    for(i=0;i<m;i++)
    {
        scanf("%s %s",x,y);
        for(j=0;j<n;j++)
        {
            if(!strcmp(x,a[j].name)||!strcmp(x,a[j].num)) 
            {
                p1=j;break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(!strcmp(y,a[j].name)||!strcmp(y,a[j].num)) 
            {
                p2=j;break;
            }
        }
        if(a[p1].gender==a[p2].gender) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
