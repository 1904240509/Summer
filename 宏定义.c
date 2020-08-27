#define Swap(a,b) t = b; b = a;a = t

int main()

{

    int a,b,t;



    scanf("%d%d",&a,&b);

    Swap(a,b);

    printf("%d %d\n",a,b);



    return 0;

}




