//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include <stdio.h>
#include <math.h>
int main () {
	double a,b,c;
	double d;
	double x,x1,x2; 
	printf("����������ϵ��a��b��c\n"); 
	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(a==0) {
		if(b==0){
			if(c==0){
				printf("����������\n");							 
			}
			else{
				printf("�����޽�\n"); 
			}
		}
		else {
			x=-c/b;
			printf("����ֻ��һ��x=%lf\n",x); 
		}
	}
	else {
		if(d<0){
			printf("������ʵ����\n");
		}
		else{
			x1=(-b-sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			printf("���̽�Ϊx1=%lf,x2=%lf",x1,x2);
		}
	}
	return 0;
}
