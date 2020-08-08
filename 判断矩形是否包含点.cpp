#include<stdio.h>
typedef struct{
	double x;
	double y;
}Point;
typedef struct{
	Point A,B;
}Line;
// 返回值：>0即点在线段的顺时针方向（下方）；<0即点在线段的逆时针方向（上方）；=0点在线段上 
double PointLineLocation(Point &E, Line &L) {
	double AB_x,AB_y; //矢量AB
	double AE_x,AE_y; //矢量AE
	AB_x=L.A.x-L.B.x; AB_y=L.A.y-L.B.y; //矢量A->B
	AE_x=L.A.x-E.x;   AE_y=L.A.y-E.y;   //矢量A->E

	return AB_x*AE_y-AB_y*AE_x; //矢量AB、AE叉乘
}

int main (void)
{
	Line AB,CD,DA,BC;
	Point E;
	printf("请依次输入矩形的四个顶点ABCD坐标：");
	scanf("%f%f%f%f%f%f%f%f",&AB.A.x,&AB.A.y,&AB.B.x,&AB.B.y,&CD.A.x,&CD.A.y,&CD.B.x,&CD.B.y);
	printf("\n");
	
	printf("请依次输入矩形的四个顶点DABC坐标：");
	scanf("%f%f%f%f%f%f%f%f",&DA.A.x,&DA.A.y,&DA.B.x,&DA.B.y,&BC.A.x,&BC.A.y,&BC.B.x,&BC.B.y);
	printf("\n");
	
	printf("请输入一个点的坐标：");
	scanf("%f%f",&E.x,&E.y);
	printf("\n");
	
    if((PointLineLocation(E,AB)*PointLineLocation(E,CD)>=0)&&(PointLineLocation(E,DA)*PointLineLocation(E,BC)>=0))
        printf("矩形包含该点");
	else
	    printf("矩形不包含该点"); 
    
}
