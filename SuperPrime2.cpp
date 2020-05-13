//��ҵ��ɾ������ļ����࣬ʹ�ü̳з���ʵ����ͬ�Ĺ��ܡ� 
#include <iostream>
using namespace std;
class Prime {
public:
	Prime() :number(0) {
	}
	Prime(int n) :number(n) {
	}
	~Prime() {
	}
	bool isPrime() {
		//2��number-1������ 
		int s = 0;
		for (int i = 1; i <= number; i++)
			if (number % i == 0)
				s++;
		if (s == 2)
			return true;
		return false;
	}
private:
	const int number;
};
class PrimeSet {
public:
	PrimeSet(int size) {
		//���ϵĹ���ʲô�� 
		set = new Prime * [size];
		this->size = size;
		index = 0;
	}
	~PrimeSet() {
		for (int i = 0; i < index; ++i)  //���ٶ��� 
			delete set[i];
		delete[] set;
	}
	int count() {
		int count = 0;
		for (int i = 0; i < size; i++)
			if (set[i]->isPrime())
				count += 1;
		return count;
	}
	bool  add(int n) {
		if (index == size)  return false;
		Prime* p = new Prime(n);
		set[index] = p;
		index += 1;
		return true;
	}
	bool isAllPrime() {
		for (int i = 0; i < index; i++)
			if (!set[i]->isPrime())
				return false;
		return true;
	}
private:
	Prime** set;
	int size, index;
};
class SuperPrime : public Prime {
public:
	SuperPrime() :Prime(0), pset(3) {  //Ϊʲô�����У� 
	}
	SuperPrime(int n) :Prime(n), pset(3) {
		// number split into N
		int temp = n;
		while (temp > 0) {
			int t = temp % 10;
			temp /= 10;
			//			pset.add(t);  //��ҵ����������Ϊ���󣿻��Ǻ�/��/ƽ����Ϊ����
			N[size++] = t;
		}
		sum();
		multi();
		squareSum();
	}
	~SuperPrime() {
	}
	bool isPrime() {   //��/����Ľӿڣ�������˵����� 
		if (Prime::isPrime() && pset.isAllPrime())
			return true;
		return false;
	}
private:
	int *N ;
	int size = 0;
	PrimeSet pset;
	int sum() {
		int s = 0;
		for (int i = 0; i < size; i++)
			s += N[i];
		pset.add(s);
		return 0;
	}
	int multi() {
		int s = 1;
		for (int i = 0; i < size; i++)
			s *= N[i];
		pset.add(s);
		return 0;
	}
	int squareSum() {
		int s = 0;
		for (int i = 0; i < size; i++)
			s += N[i] * N[i];
		pset.add(s);
		return 0;
	}
};
int main() {
	/*SuperPrime sp(113);
	if (sp.isPrime())
		std::cout << "113 is SuperPrime" << std::endl;
	else
		std::cout << "113 is NOT SuperPrime" << std::endl;*/
	int count = 0;
	int sum = 0;
	for (int i = 100; i <= 1000; i++)
	{
		SuperPrime sp(i);
		if (sp.isPrime())
		{
			count++;
			sum += i;
		}
	}
	cout << "How Many: " << count << endl;
	cout << "Sum is " << sum << endl;
	return 0;
}
