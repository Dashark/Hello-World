/*D: ��¥¥��
	��N��¥�ݣ�һ�ο��������׻�һ�ף����ж�������¥��ʽ��

	����
	������N, 1 <= N <= 30

	���
	��¥��ʽ��*/
#include<iostream>
int f(int n);
int mainD()
{
	int n;
	std::cin >> n;
	std::cout << f(n) << std::endl;
	return 0;

}

int f(int n)
{
	if (n == 1||n==2)
		return n;
	else
		return f(n - 1) + f(n - 2);
}