#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
typedef struct{
	double x;
	double y;
}Point;
typedef struct{
	Point A,B;
}Line;
// 线段L与C的位置关系
// 返回值：>0即C在L的顺时针方向（下方）；<0即C在L的逆时针方向（上方）；=0同线
double PointLineLocation(Point &C, Line &L) {
	double AB_x,AB_y; //矢量AB
	double AC_x,AC_y; //矢量AC
	AB_x=L.A.x-L.B.x; AB_y=L.A.y-L.B.y; //矢量A->B
	AC_x=L.A.x-C.x;   AC_y=L.A.y-C.y;   //矢量A->C

	return AB_x*AC_y-AB_y*AB_x; //矢量AB、AC叉乘
}
int Intersection(Line &L1, Line &L2) { //L1和L2是否相交
	//快速排斥
	if ( max(L1.A.x, L1.B.x)<min(L2.A.x, L2.B.x) ) return 0;
	if ( max(L1.A.y, L1.B.y)<min(L2.A.y, L2.A.y) ) return 0;
	if ( max(L2.A.x, L2.B.x)<min(L1.A.x, L1.A.x) ) return 0;
	if ( max(L2.A.y, L2.B.y)<min(L1.A.y, L1.A.y) ) return 0;
	
	//跨立实验
	if ( PointLineLocation(L1.A, L2)*PointLineLocation(L1.B, L2)>0 ) //L1的两端点都在L2的同侧
		return 0;
	if ( PointLineLocation(L2.A, L1)*PointLineLocation(L2.B, L1)>0 ) //L2的两端点都在L1的同侧
		return 0;

	return 1; //相交 
	          //<0表示A B在CD两侧和C D在AB两侧，=0表示特殊情况 AB与CD垂直 
}

int main(void)
{
	Line M,N;
	printf("Please input the 2 points on the first line:");
	scanf("%f%f%f%f",&M.A.x,&M.A.y,&M.B.x,&M.B.y);
	printf("\n");
	
	printf("Please input the 2 points on the second line:"); 
	scanf("%f%f%f%f",&N.A.x,&N.A.y,&M.B.x,&N.B.y);
	printf("\n");
	
	if(Intersection(M,N))
	    printf("两条线段相交\n");
	else
	    printf("两条线段不相交\n");
 } 
