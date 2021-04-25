#include <iostream>
#include <vector>
#include <cmath>
class Nature {
	private:
		int num;
	public:
		Nature():num(0) {
			//std::cout << "Default Create Nature as " << num << std::endl;
		}
		Nature(int n):num(n) {
			//std::cout << "Create Nature as " << num << std::endl;
		}
		Nature(const Nature &nat):num(nat.num) {
			//std::cout << "Copy Create Nature as " << num << std::endl;
		}
		~Nature() {
			//std::cout << "Destroy Nature as " << num << std::endl;
		}
		bool compare(Nature it) {
			if(it.num > num) {
				return true;
			} else
				return false;
		}
		bool isPrime(int x) {
			if (x <= 0) {
				return false;
			}
			if (x > 2) {
				for (int i = 2; i < x; i++) {
					if (x % i == 0) {
						return false;
						break;
					}
				}
			}
			return true;
		}
		bool isSuperPrime() {
			int a = num % 10;
			int b = (num / 10) % 10;
			int c = num / 100;
			if(isPrime(num) && isPrime(a+b+c) && isPrime(a*b*c) && isPrime(a*a+b*b+c*c))
				return true;
			else
				return false;
		}
		void show() {
			std::cout<< num <<std::endl;
		}
		friend class SuperPrime;
};
class SuperPrime {
	private:
		std::vector<Nature> natures;
	public:
		SuperPrime(int a, int b) {
			//std::cout << "Create SuperPrime from " << a << " to " << b << std::endl;
			for(int i = a; i < b; i++) {
				Nature nat(i);
				//std::cout << "HAHA" << std::endl;
				natures.push_back(nat);
				//std::cout << "DDDDD" << std::endl;
			}
		}
		~SuperPrime() {
			//std::cout << "Destroy SuperPrime " << std::endl;
		}

		Nature max() {
			std::vector<Nature>::iterator it = natures.begin();
			Nature max(0);
			for(; it != natures.end(); it ++) {
				if(it->isSuperPrime()) {
					if (max.compare(*it)) {
						max = *it;
					}
				}
			}
			return max;
		}
		Nature num() {
			std::vector<Nature>::iterator it = natures.begin();
			Nature num(0);
			for (; it != natures.end(); it++) {
				if (it->isSuperPrime()) {
					num.num++;
				}
			}
			return num;
		}
		Nature sum() {
			std::vector<Nature>::iterator it = natures.begin();
			Nature max(0);
			Nature sum(0);
			for (; it != natures.end(); it++) {
				if (it->isSuperPrime()) {
					sum.num += it->num;
				}
			}
			return sum;
		}
};
int main() {
	SuperPrime sp(100, 999);
	Nature n = sp.max();
	Nature m = sp.num();
	Nature o = sp.sum();
	std::cout << "最大的超级素数是：";
	n.show();
	std::cout << "超级素数的个数是：";
	m.show();
	std::cout << "超级素数的和是：";
	o.show();
	return 0;
}
