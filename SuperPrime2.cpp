//��ҵ���������������¿�ܵĴ���ϸ�ڣ������ܱ������еõ���ȷ��� 
#include <iostream>
#include<cmath> 
using namespace std;  
class SuperPrime {
private:
    const int number;
    SuperPrime* N[100];
    int size;
    bool isPrime() {  // 2��number-1������
        if (number == 2 || number == 3)
            return 1;
        if (number % 6 != 1 && number % 6 != 5)
            return 0;
        int tmp = (int)sqrt(number);
        int i;
        for (i = 5; i <= tmp; i += 6)
            if (number % i == 0 || number % (i + 2) == 0)
                return false;
        return true;
    }
    void split() {   //�����������ģʽ       // number split into N
        size = 0;
        int temp = number;
        while (temp > 0) {
            int n = temp % 10;
            temp /= 10;
            N[size] = new SuperPrime(n);   //������� 
            size += 1;
        }
    }
    int sum() {
        int s = 0;
        for (int i = 0; i < size; i++)
            s += N[i]->number;
        return s;
    }
    int multi() {
        int s = 1;
        for (int i = 0; i < size; i++)
            s *= N[i]->number;
        return s;
    }
    int squareSum() {
        int s = 0;
        for (int i = 0; i < size; i++)
            s += (N[i]->number) * (N[i]->number);
        return s;
    }
public:
    SuperPrime() :number(0) {  //Ϊʲô�����У� ::Ĭ�Ϲ��캯��(�޲�)
        size = 0;
    }
/*���캯���ڲ�������ʱʹ�ã�ͨ����programerû�ж��幹�캯��ʱ���������Զ����ɣ�
���������һ���вεĹ��캯��(��N[size] = new SuperPrime(n))�� 
����Ҫһ���޲εĹ��캯��(��˴���set[1000])ʱ������Ҫ�Լ�����*/
    SuperPrime(int n) :number(n) {  //�����ǹ������ 
        size = 0;
    }
    ~SuperPrime() {
        for (int i = 0; i < size; i++)  //���ٶ��� 
            delete N[i];
    }
    bool isSuperPrime() {
        split();
        SuperPrime a(sum());   //����ͨ����ת��Ϊ���� 
        SuperPrime b(multi());
        SuperPrime c(squareSum());
        if (isPrime() && a.isPrime() && b.isPrime() && c.isPrime())
            return true;
        return false;
    }
    void Setnum(int n) {
        int* p = (int*)&number;
        *p = n;
    }
};
class Set {
private:
    SuperPrime set[1000];
    int size;
    int begin, end;
public:
    Set(int from, int to) { //���캯���������
        begin = from;
        end = to;
        size = to-from;
    }
    ~Set() {}
    int count() {
        int count = 0;
        for (int i = 0; i < size; i++) {
            set[i].Setnum(i + begin);
            if (set[i].isSuperPrime())
                count += 1;
        }
        return count;
    }
    int sum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            set[i].Setnum(i+begin);
            if (set[i].isSuperPrime())
                sum += i + begin;
        }
        return sum;
    }

};
int main() {
    Set ss(100, 1000);
    cout << "How Many: " << ss.count() << endl;
    cout << "Sum is " << ss.sum() << endl;
    return 0;
}

