//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型

#include <stdio.h>
int main (){
	double a,b,c,d,e,f;
	double x,y;
	printf("����������ϵ��a��b��c\n");
	scanf ("%lf,%lf,%lf",&a,&b,&c);
	printf("%lfx+%lfy=%lf\n",a,b,c);
	printf("����������ϵ��d��e��f\n");
	scanf ("%lf,%lf,%lf",&d,&e,&f);	
	printf("%lfx+%lfy=%lf\n",d,e,f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("���̽�Ϊx=%lf,y=%lf",x,y);
	return 0;
} 
