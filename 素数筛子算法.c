//���ڸ���һ��������N��Ҫ����ٵ��ҳ���2.....N��Щ���������е�������
//����һ����������N(N<=2000000)����NΪ0ʱ�������򡣡��������ݲ�����100��
//��2~N��Χ�����е����������������֮���ÿո����
#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 2000001
  
int main(){
    int i;
    int j;
    char flag[N];
    memset(flag,'0',N);//memset�ǰ�flag�������ֽڻ����ַ�'0'����������ָ����ַ����ĳ�ʼ����
    flag[0]='1'; 
    flag[1]='1';
  
    for(i=2;i<=sqrt(N);i++){//���������������flag=1����������flag=0. 
        if(flag[i]=='0'){
            for(j=i*i;j<N;j+=i){
                flag[j]='1';
            }
        }
    }
  
    int number;
      
    while(1){
        scanf("%d",&number);
  
        if(number==0)
            break;
  
        for(i=2;i<=number;i++){
            if(flag[i]=='0')
                printf("%d ",i);
        }
              
        printf("\n");
    }
  
    return 0;
}
