//����n����������ȡ��m���������ȡʹ����m�����ĳ˻�����أ�

#include<stdio.h>
#include<math.h>
int c[20];
void paixu(int b[], int n)
{
    int i, j, temp;
    for(i = n; i > 0; i--)
    {
       for(j = 0; j < i-1; j++)
       {
           if(b[j] < b[j+1])
           {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
           }
       }
    }
}
int main()
{
    int n, m, sum, i, j, a, b, x;
    scanf("%d", &x);
    while(x--)
    {
        sum = 1;
        scanf("%d%d", &n, &m);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
        }
        paixu(c,n);
        for(i = n-1, j = 0; m > 0;)
        {
            if(m>=2)
            {
                a = c[i]*c[i-1];//��������˻�
                b = c[j]*c[j+1];//��С�����˻�
                if(a >= b)
                {
                    sum *= a;
                    m -= 2;
                    i -= 2;
                }
                else
                {
                    sum *= c[j++];
                    --m;
                }
            }
            else
            {
                 sum *= c[j++];
                 --m;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
