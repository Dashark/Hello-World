#include<stdio.h>
#include<math.h>
void function_one(void);
void function_two(void);
void function_three(void);
int mainone()
{
	int choice;
	printf("                1.����һ������������С�����֡�\n");
	printf("                2.�Զ�Ԫһ�η�������⡣\n");
	printf("                3.��һ�������������������㡣\n");
	printf("                                   ����������Ҫִ�е�����");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:function_one(); break;
	case 2:function_two(); break;
	case 3:function_three(); break;
	default:printf("��������Ч�����\n");
		break;
	}
	return 0;
}

void function_one(void)
{
	float k;
	int k_1;
	float k_2;
	printf("                ������һ��������С��λ��������");
	scanf("%f", &k);
	k_1 = k;
	k_2 = k - k_1;
	printf("                %f����������Ϊ%d��С������Ϊ%f\n", k, k_1, k_2);
}

void function_two(void)
{
	float a, b, c, d, e, f;
	printf("                �����ax+by=c��dx+ey=f���ķ�����Ϊ��Ԫһ�η�����\n");
	printf("                ������a=");
	scanf("%f", &a);
	printf("                ������b=");
	scanf("%f", &b);
	printf("                ������c=");
	scanf("%f", &c);
	printf("                ������d=");
	scanf("%f", &d);
	printf("                ������e=");
	scanf("%f", &e);
	printf("                ������f=");
	scanf("%f", &f);
	printf("                �÷�����Ľ�Ϊx=%f,y=%f", (c*e - b*f) / (a*e - b*d), (c*d - a*f) / (b*d - a*e));
}

void function_three(void)
{
	float k;
	int a;
	printf("                ������һ��������С��λ��������");
	scanf("%f", &k);
	a = (int)(k + 0.5);
	printf("                %f���������Ϊ%d", k, a);
}