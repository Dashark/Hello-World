/*E: ����������Լ��
	����

	���������������Լ��

	����

	ÿ�������������1��������������ʽΪ
	��1�У����ݵ�����n
	��2�У���һ������(����֮���Զ��Ÿ�������
	��3�У��ڶ������ݣ�
	...
	��n + 1�У���n������

	���

	���ÿ�������е����Լ��*/
#include<iostream>
#include<string>
int f(int*a, int n);
int mainE()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::string a;
		std::cin >> a;
		int *b= new int [10];
		int sum = 0, k = 0;
		for (int j = 0; a[j] != '\0'; j++)
		{
			if (a[j] != ',')
				sum = sum * 10 + (a[j]-'0');
			else
			{
				b[k] = sum;
				sum = 0;
				k++;
			}

		}
		std::cout << f(b, k) << std::endl;
	}
	return 0;
}

int f(int*a, int n)
{
	int m = a[0];
	for (int i = 0; i < n-1; i++)
		while (a[i+1]!= 0)
		{
		 int r = m % a[i+1];
		 m = a[i+1];
		 a[i+1]= r;
		}
	return m;
}