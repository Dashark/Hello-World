//English-russian

#include <stdio.h>

int main ()
{
	int a, b, c, d, n;
	printf("��������");
	scanf("%d", &a);
	printf("��Ӣ��");
	scanf("%d", &b);
	printf("�����");
	scanf("%d", &c);	
	printf("������������");
	scanf("%d", &d);
	
	n = a-((a-b)+(a-c)-d);
	if(n < 0)
	  printf("�������ݴ����޷�����");
	else
	  printf("����������%d��", n);
		
	return 0;
 } 

  
