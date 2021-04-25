#include <iostream>
#include <vector>
class Nature
{
private:
	int num;

public:
	Nature(int n)
	{
		num = n;
	}
	~Nature() {}

	bool isPrime()
	{
		for (int i = 2; i * i <= num; i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
	bool isSuperPrime()
	{
		int xx = num, a, sum = 0, mul = 1, sqrsum = 0;
		while (xx != 0)
		{
			a = xx % 10;
			sum += a;
			mul *= a;
			sqrsum += (a * a);
			xx /= 10;
		}
		Nature mul1(mul), sum1(sum), sqrsum1(sqrsum);
		if (mul == 0)
			return false;
		else if (this->isPrime() && mul1.isPrime() && sum1.isPrime() && sqrsum1.isPrime())
			return true;
		else
			return false;
	}
	int show()
	{
<<<<<<< HEAD
<<<<<<< HEAD
		return num;
=======
		return num ;
>>>>>>> a4bb835fa3c3d18aba01162082cc1be822c7b46f
=======
		return num;
>>>>>>> d2062996a9aeb4aa58738d425f92646cb9620d22
	}
};

class SuperPrime
{
private:
	std::vector<Nature> range;

public:
	SuperPrime(int a, int b)
	{
		for (int i = a; i < b; i++)
		{
			Nature nat(i);
			if (nat.isSuperPrime())
				range.push_back(nat);
		}
	}
	int max()
	{
		int Max = 0;
		for (std::vector<Nature>::iterator it = range.begin(); it != range.end(); it++)
		{
			if (it->show() > (it + 1)->show())
				Max = it->show();
			else
				Max = (it + 1)->show();
		}
		return Max;
	}

	int sum()
	{
		int Sum = 0;
		for (std::vector<Nature>::iterator it = range.begin(); it != range.end(); it++)
		{
			Sum += it->show();
		}
		return Sum;
	}

	int howmany()
	{
		return range.size();
	}
};

int main()
{
	SuperPrime sp(100, 999);
<<<<<<< HEAD
<<<<<<< HEAD
	std::cout << "超级素数的个数：" << sp.max() << std::endl;
	std::cout << "所有的超级素数之和：" << sp.sum() << std::endl;
	std::cout << "最大的超级素数：" << sp.howmany() << std::endl;
=======
	std::cout << "���������ĸ�����" << sp.max() << std::endl;
	std::cout << "���еĳ�������֮�ͣ�" << sp.sum() << std::endl;
	std::cout << "���ĳ���������" << sp.howmany() << std::endl;
>>>>>>> a4bb835fa3c3d18aba01162082cc1be822c7b46f
=======
	std::cout << "超级素数的个数：" << sp.max() << std::endl;
	std::cout << "所有的超级素数之和：" << sp.sum() << std::endl;
	std::cout << "最大的超级素数：" << sp.howmany() << std::endl;
>>>>>>> d2062996a9aeb4aa58738d425f92646cb9620d22
	return 0;
}
