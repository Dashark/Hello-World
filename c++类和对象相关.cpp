#include<iostream>
#include<cstdio>
#include<string>
//string ���ͽ���
//string s1 s1Ϊ�մ���
//string s2("abc") ��ʼ��
//string s3(s2) ��ʼ��Ϊs2��һ������
//stirng s4(n,"c") ��ʼ��Ϊ�ַ���c����n��������
//s.empty() true or false;
//s.size(); s+s1 ; s=s2; s==s1 ;s!=s1;s[n]���㿪ʼ��
//˫������Ӳ�����

//���캯�� ���캯������
//
using namespace std;

class TV {
public:
	TV():type(10){};//��ʼ���б�(ֻ���ڹ��캯��)���ͣ�����{}����
	TV(const TV& tv1){}//�������캯�� ����
	//�������캯������ʱ����
	//��ǳ���������   ����ָ��
	char name[20];
	int type;

	void changevol1() {
		cout << type << endl;
	}
	void power1() {
		cout << name << endl;
	}
	
};

//���ʵ�� 
class array1 {
public:
	array1() { m_icount = 5; m_parr = new int[m_icount]; }
	array1(const array1& arr) {
		m_icount = arr.m_icount;
		m_parr = new int[m_icount];//�ڿ��������ڲ����������ڴ棻
		for (int i = 0; i < m_icount; i++) {
			m_parr[i] = arr.m_parr[i];
		}

	}
	~array1();

private:
	int m_icount;
	int *m_parr;

};
//�����Ա  sizeof �������ܺͣ�

//this ָ�� ���������ݳ�Աͬ�� this -> something

int main() {
	TV tv[3];//��ջʵ��������
	TV *p = new TV[20]; //�Ӷ���ʵ��������
	tv[0].type = 0;//ջ�з��ʵ������
	(*p).type = 22;
	p->type = 1;//���з�����ָ���ͷ����
	string na = "zhangsan";
	string hobby("football");
	cout << na << " " << hobby << endl;
	cout << hobby.size() << endl;
	cout << na.empty() << endl;

	cout << tv[0].type << endl;
	cout << p->type << endl;
	delete[]p;
	p = NULL;
	getchar();
	return 0;
}