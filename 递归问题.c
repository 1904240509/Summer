/*有5个人坐在一起，问第5个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第3个人，又说比第2人大两岁。
问第2个人，说比第1个人大两岁。最后 问第1个人，他说是10岁。请问第5个人多大？ */

#include <stdio.h> 
int age(a)//a为第几人
{
    int i;//i用于存放年龄
    if(a==1)
    { 
	    i=10;
    	return i;
	} 
    else
    {
		i=age(a-1)+2;
		printf("第%d轮的数是%d\n",a,i);
    	return i;
	} 
}
int main() 
{
    int Age=age(5);
	printf("第5个人的年龄是%d岁", Age); 
	return 0;
}

