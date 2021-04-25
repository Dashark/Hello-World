#include <iostream>
using namespace std;

class superprime{
private:
	bool prime[1000];//���������
	bool super[1000];//�������������
	int left, right;
	int n;
public:
	superprime(int p, int q) : left(p), right(q){ //��ʼ����
		for (int p = 100; p < 1000; p++)
		{
			prime[p] = false;
			super[p] = false;
		}//��ʼ��
		int t, m, a, b, c;
		for (n = 0; n <= 999; n++)
		{
			for (t = 2; t < n; t++)
			{
				m = n % t;
				if (m == 0)
				{
					prime[n] = false;
					break;
				}
				prime[n] = true;
			}
		}//�������
		for (n = 100; n <= 999; n++)
		{
			if (prime[n])
			{
				a = n / 100;
				c = n % 10;
				b = (n - a * 100 - c) / 10;
				int sum = a + b + c;
				int multiple = a * b * c;
				int mulsum = a * a + b * b + c * c;
				if (prime[sum] == true && prime[multiple] == true && prime[mulsum] == true)//ֱ��������������
					super[n] = true;//�����������
			}
		}
	}//���캯��
	~superprime(){}//��������
	int max();
	int sum_super();
	int count();
};
int superprime::max()
{
	int max = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (super[i])
			max = i;
	}
	return max;
}
int superprime::sum_super()
{
	int sum_super = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (super[i])
			sum_super += i;
	}
	return sum_super;
}
int superprime::count()
{
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (super[i])
			count++;
	}
	return count;
}
int main()
{
	superprime sup(100,999);
	cout << "���ֵΪ" << sup.max() << endl;
	cout << "�ܺ�Ϊ" << sup.sum_super() << endl;
	cout << "������������" << sup.count() << endl;

	return 0;
}