#include <stdio.h> 
int main(){
	int a,b,r=1;//a为除数，b为被除数，r为余数先赋值为1 
    printf("输入除数与被除数（空格分开）：");
    scanf("%d %d",&a,&b);
    while(r!=0){             // 如果a<b,亦无需颠倒ab，在计算中商为0余数为本身，在下次运算中自可颠倒回来 
        r = a % b;
        a = b;
        b = r;
    }
    printf("最大公约数为：%d\n",a);        // 此时b的值已经在a中了，所以输出的a就是最大公约数 
    return 0;
 }
