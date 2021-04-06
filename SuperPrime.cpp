#include <iostream>
class Nature {
private: 
  int num;  //�� 
public:
  Nature();
  ~Nature();
  Nature add(Nature sp);    //��� 
  bool compare(Nature sp) {  //�ȴ�С 
     if(num > sp.num)
       return true;
    return false;
  }
	
};
class SuperPrime {
private: 
  const unsigned int num;  //�� 
public:
  SuperPrime(int n):num(n) {
  }
  ~SuperPrime() {
  }
  Nature add(SuperPrime sp) {    //��� 
     return Nature(num + sp.num);
 }
  bool compare(SuperPrime sp) {  //�ȴ�С 
     if(num > sp.num)
       return true;
    return false;
  }
};
int main() {
  Nature sum(0);
  for(int i = 100; i < 999; i++) {
    Nature sp1(i);
    if ( sp1.isPrime() )
      sum = sum.add(sp1);
  }
  return 0;
} 
