//�洢һ����������Apple,Tom,Green,Jack Ҫ�����ֵ���������ʾ��

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
                if(strcmp(name[j],name[j+1])>0)//ð�������С�����ַ�����������
                {
                //��Ҫע����Ƕ��ַ�����ֵ�������ø�ֵ��=�������ú���strcpy���и�ֵ
                    strcpy(tmp,name[j]);
                    strcpy(name[j],name[j+1]);
                    strcpy(name[j+1],tmp);
                }
            }
        }
        for(i=0;i<m;i++)
            printf("%s\n",name[i]);//��������ַ���
    }
    return 0;
}
