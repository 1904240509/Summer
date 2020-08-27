/*在一个有限的正整数序列中，有些数会多次重复出现在这个序列中。 
如序列：3，1，2，1，5，1，2。其中1就出现3次，2出现2次，3出现1  次，5出现1次。 
你的任务是对于给定的正整数序列，从小到大依次输出序列中出现的数及出现的次数。 

数据规模和约定 
数据：n< =1000；0< x< =1000,000。 */
#include <stdio.h>
 
int arr[1000000];
 
int main(void)
{
    int n;
    scanf("%d", &n);
 
    int tmp;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp]++;
    }
 
    for (i = 0; i < 1000000; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d %d\n", i, arr[i]);
        }
    }
 
 
    return 0;
}

