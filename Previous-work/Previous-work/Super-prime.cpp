#include<cstdio>
#include<cmath>
int fa(int m);
int fb(int m);
int maintwo()
{
	printf("��������100~9999���ڵ����г�������\n");
	int count = 0, a[20], sum=0, i;
	for (i = 100; i <= 9999; i++)
	{
		if (fb(i) == 1)//�жϸ����Ƿ�Ϊ����������������洢�������� 
		{
			a[count] = i;
			count++;
		}

	}
	printf("������������Ϊ%d���ֱ�Ϊ��\n", count);
	for (i = 0; i<count; i++)
	{
		sum = sum + a[i];
		printf("%d\n", a[i]);
	}
	printf("���г�������֮��Ϊ%d,���ĳ�������Ϊ%d\n", sum, a[count - 1]);
	return 0;
}

int fa(int m)//�ж�һ�����Ƿ�Ϊ���� 
{
	int flag = 0;//���ñ�� 
	if (m != 1)
	{
		float t = sqrt(m);//ʹ�жϴ�����Ч���� 
		int count = 0, i = 1;
		for (; i <= t; i++)
			if (m%i == 0)
				count++;
		if (count == 1)
			flag = 1;
	}

	return flag;
}

int fb(int i)//�ж�һ�����Ƿ�Ϊ�������� 
{
	int flag = 0;//���ñ�� 
	int sum, mult, sumu;//��һ�������ĸ���λ����ͣ��������ƽ���� 
	sum = i % 10 + (i / 10) % 10 + (i / 100) % 10 + i / 1000;
	if (i / 1000 == 0)
		mult = (i % 10)*((i / 10) % 10)*((i / 100) % 10);
	else
		mult = (i % 10)*((i / 10) % 10)*((i / 100) % 10)*(i / 1000);
	sumu = (i % 10)*(i % 10) + ((i / 10) % 10)*((i / 10) % 10) + ((i / 100) % 10)*((i / 100) % 10) + (i / 1000)*(i / 1000);
	if (fa(sum) == 1 && fa(mult) == 1 && fa(sumu) == 1)
		flag = 1;
	return flag;
}