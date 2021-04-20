#include <iostream>
#include <vector>
class Nature {
public:
  int num;

  Nature():num(0){
   // std::cout << "Default Create Nature as " << num << std::endl;
  }// num = 0
  
  Nature(int n):num(n) {
  //  std::cout << "Create Nature as " << num << std::endl;
  }//num = n
  
  Nature(const Nature &nat):num(nat.num){
  //  std::cout << "Copy Create Nature as " << num << std::endl;
  }
  
  ~Nature() {
   // std::cout << "Destroy Nature as " << num << std::endl;
  }
   bool is_superPrime(int a){
	int  hun,ten,one,sum,mul,square_sum;
	hun=a/100;
	ten=(a-100*hun)/10;
	one=a-100*hun-10*ten;
	mul=hun*ten*one;
	sum = hun + ten + one;
	square_sum = hun * hun + ten * ten + one * one;
	if(prime(a) * prime(sum) * prime(mul)* prime(square_sum) == 1)
	{
		return 1;
	}else return 0;
	
}
int prime(int a){
	int i,b=0;
	
	if(a == 2)
	b = 1;
	
		for(i=2;i<a;i++){
		if(a%i==0)
		{
			b=0;
			break;
		}else b=1;
		
	}

	return b;
	
}//�ж�һ���������ǲ������� ����Ϊ1������Ϊ0 

};



class SuperPrime {
private:
  std::vector<Nature> natures;
public:
  SuperPrime(int a, int b) {
    std::cout << "Create SuperPrime from " << a << " to " << b << std::endl;
    for(int i = a; i < b; i++) {
      Nature nat(i);
  //    std::cout << "HAHA" << std::endl;
      if(nat.is_superPrime(i)){
      	natures.push_back(nat);
	  }
      
 //     std::cout << "DDDDD" << std::endl;
	}
  }
  
  ~SuperPrime() {
  //  std::cout << "Destroy SuperPrime " << std::endl;
  }
 

  
  Nature max() {
  	std::vector<Nature>::iterator it = natures.begin();
  	Nature max(0);
  	for(; it != natures.end(); it ++) {
  	  if((*it).is_superPrime(it->num)) {
  	  	
  	  	  max = *it;
	
	  }
	}
  	return max;
  }
   void show() {
  	std::vector<Nature>::iterator it = natures.begin();
  	for(; it != natures.end(); it ++) {
  	  if((*it).is_superPrime(it->num)) {
  	  		std::cout<<std::endl; 
			std::cout<<(*it).num;
		}
	  }
	}
  

};
int main() {
  SuperPrime sp(100, 999);
  Nature n = sp.max(); 
  std::cout << "���ĳ���������" << n.num;
  sp.show();
  
  return 0;
} 
