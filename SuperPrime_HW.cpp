#include <iostream>
//�ж�һ�����ǲ�������
int isPrime(int x) {
	int state = 1;
	if (x <= 0) {
		state = 0;
	}
	if (x > 2) {
		for (int i = 2; i < x && state == 1; i++) {
			if (x % i == 0) {
				state = 0;
				break;
			}
		}
	}
	return state;
} //����1��������
int main() {
	//��������������������������֮�ͣ���������֮���Լ��������ֵ�ƽ���Ͷ���������
	//����113����[100,999]֮�ڣ�
	//���������ĸ��������г�������֮�ͣ����ĳ�������
	int num[900];
	for (int i = 0; i < 900; i++) {
		num[i] = i + 100;
	}
	int flag[900] = {0};
	for (int i = 0; i < 900; i++) {
		int a = num[i] / 100;
		int b = (num[i] % 100) / 10;
		int c = (num[i] % 100) % 10;
		if (isPrime(num[i]) == 1 && isPrime(a + b + c) == 1 && isPrime(a * b * c) == 1 && isPrime(a * a + b * b + c * c) == 1) {
			flag[i] = 1;
		} else {
			flag[i] = 0;
		}
	}
	int count=0; //���������ĸ���
	int sum=0; //��������֮��
	int max=0;
	for (int i = 0; i < 900; i++) {
		if (flag[i] == 1) {
			count++;
			sum=sum+num[i];
			max=(max>num[i]?max:num[i]);
		}
	}
	std::cout<<"��������������"<<count<<std::endl;
	std::cout<<"���������ĺͣ�"<<sum<<std::endl;
	std::cout<<"���ĳ���������"<<max<<std::endl;
	return 0;
}
