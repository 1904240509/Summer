/*������Ὺʼ�ˡ�n������ÿ�����������ԣ�������ѧ�š��Ա�
���У������ó��Ȳ�����20�Ľ��ɴ�Сд��ĸ���ɵ��ַ�����ʾ��ѧ���ó��Ȳ�����10��  �������ֹ��ɵ��ַ�����ʾ���Ա���һ����д�ַ���F����M����ʾ��
�������˵�������ѧ�ž�������ͬ��
����֮��ÿ���˿ɱ���������ѧ��Ψһȷ����
����m��  ���˵���Ϣ��������ѧ�ţ����ж������Ƿ��ܹ��衣�����ܹ���ĳ�Ҫ����Ϊ�����Ա����졣 */

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
