//��ҵ���������������¿�ܵĴ���ϸ�ڣ������ܱ������еõ���ȷ��� 
#include <iostream>
class SuperPrime {
  public:
  	SuperPrime():number(0) {  //Ϊʲô�����У� 
  	  size = 0;
  	}
  	SuperPrime(int n):number(n) {
  	  size = 0;
  	  split();  //�����ǹ������ 
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i)  //���ٶ��� 
		delete N[i]; 
	}
  	bool isSuperPrime() {
  	  SuperPrime a(sum());   //����ͨ����ת��Ϊ���� 
	  SuperPrime b(multi());
	  SuperPrime c(squareSum());
	  if (isPrime() && a.isPrime() && b.isPrime() && c.isPrime())
	    return true; 
  	  return false;
	}
	const int number;
  private:

  	SuperPrime *N[100];
	int size,i;
  	bool isPrime() { 
  	  //2��number-1������ 
  	  return false;
	}
	void split() {   //�����������ģʽ 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;
	  	N[size] = new SuperPrime(n);   //������� 
	  	size += 1;
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
class Set {
  public:
  	Set(int from, int to) {
  	  size = 0;
	}
  	~Set() {
	}
  	int count() {
  	  int count = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
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
  	SuperPrime set[1000];
  	int size;
};
int main() {
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
}
