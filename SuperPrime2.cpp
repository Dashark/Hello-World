//��ҵ���������������¿�ܵĴ���ϸ�ڣ������ܱ������еõ���ȷ��� 
#include <iostream>
class Prime {
  public:
  	Prime():number(0) {
	}
  	Prime(int n):number(n) {
	}
	~Prime() {
	}
  	bool isPrime() { 
  	  //2��number-1������ 
  	  return false;
	}
  private:
  	const int number;
}; 
class PrimeSet {
  public:
  	PrimeSet(int size) {
  	  //���ϵĹ���ʲô�� 
  	  N = new Prime*[size];
  	  this->size = size;
  	  index = 0;
	}
	~PrimeSet() {
  	  for (int i = 0; i < index; ++i)  //���ٶ��� 
		delete N[i]; 
	  delete[] N;
	}
	bool add(int n) {
	  if(index == size)  return false;
	  Prime *p = new Prime(n);
	  N[index] = p;
	  index += 1;
	  return true;
	}
	bool isAllPrime() {
	  for(int i = 0; i < index; i++)
	    if (!N[i]->isPrime())
	      return false;
	  return true;
	} 
  private:
  	Prime **N;
	int size, index;
};
class SuperPrime {
  public:
  	SuperPrime():number(0), pset(3) {  //Ϊʲô�����У� 
  	}
  	SuperPrime(int n):number(n), pset(3) {
  	  split();  //�����ǹ������ 
	}
  	~SuperPrime() {
	}
  	bool isSuperPrime() {
  	  //��ôʹ��pset�� 
  	  Prime p(number);
	  if (p.isPrime())
	    return true; 
  	  return false;
	}
	const int number;
  private:
<<<<<<< HEAD

  	SuperPrime *N[100];
	int size,i;
  	bool isPrime() { 
  	  //2��number-1������ 
  	  return false;
	}
=======
  	const int number;
  	PrimeSet pset;
>>>>>>> upstream/master
	void split() {   //�����������ģʽ 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;
	  	pset.add(n);  //��ҵ����������Ϊ���󣿻��Ǻ�/��/ƽ����Ϊ���� 
	  } 
	}
	int sum() {
		int sum=0;
		for(i=0;i<4;i++)
			sum+=N[i]->number;
	  return sum;
	}
	int multi() {
		int mul=1;
		for(i=0;i<4;i++)
			mul*=N[i]->number;	
	  return mul;
	}
	int squareSum() {
		int sqsum=0;
		for(i=0;i<4;i++)
			sqsum+=N[i]->number*N[i]->number;
	  return sqsum;
	}
};
class SuperPrimeSet {
  public:
  	SuperPrimeSet(int from, int to) {
  	  size = to - from;
  	  for (int i = from; i < to; i++)
  	    set[i-from] = new SuperPrime(i);
	}
  	~SuperPrimeSet() {
  	  for(int i = 0; i < size; i++)
  	    delete set[i];
	}
  	int count() {
  	  int count = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i]->isSuperPrime())
  	      count += 1;
	  return count; 
	}
  int sum() {
  	  int sum = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
  	      sum += set[i].number;
	  return sum; 
	}
  private:
  	SuperPrime **set;
  	int size, index;
};
int main() {
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
}
