/*B: 9������ת��Ϊ2������
	����

	����һ��9��������������Ӧ��2������

	����

	��һ����һ������n����ʾһ����n�����������
	����һ����n�����룬ÿ������Ϊһ������������ʾһ��9������

	���

	����ÿһ���������ݣ�������Ӧ2��������ÿ���������ռһ��*/
#include<iostream>
#include<cmath>
int change(int n);
int mainB()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int text;
		std::cin >> text;
		std::cout << change(text) << std::endl;
	}
	return 0;
}
int change(int n)
{
	int sum = 0,i=0;
	for (; n > 0; i++)
	{
		sum = sum + (n % 10)*pow(9, i);
		n = n / 10;
	}
	int result = 0,k=1;
	while(sum)
	{
		i = sum % 2;
		result = k*i + result;
		k = k * 10;
		sum /= 2;
	}
	return result;
}