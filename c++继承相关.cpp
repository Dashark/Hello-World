#include<string>
#include<iostream>
#include<cstdlib>
//���м̳�public
//�����̳�protected
//˽�м̳�private

using namespace std;
class person {
public:
	person();
	~person();

	void eat();
protected:

	string m_strname;
private:

	int m_iage;

};
class worker :public person {
public:
	worker();
	~worker();
	void work();
	int m_salary;

};

person::person() {
	cout << "person()" << endl;
}
person::~person(){
	cout << "~person()" << endl;
}
void person::eat() {
	m_strname = "jin";
		m_iage = 2;
	cout << "eat()" << endl;
	cout << m_strname << endl;
}
worker::worker() {
	cout << "worker()" << endl;

}
worker::~worker() {
	cout << "~worker()" << endl;
}
void worker::work() {
	cout << "work()" << endl;
}
int main() {
	worker *p = new worker();
	delete p;
	p = NULL;
	person per;
	per.eat();
	

	getchar();
	return 0;

}
//���� �̳���ͬ���������ʻ�������

//soldier.play()
//soldier.person::play();
//������ͬ ֻ�к�������ͬ����������
//������ͬ����������ͬ�����ݳ�Ա ���ڸ��������ڷ�����Ҫ�����������ݳ�Ա


//is a  ����
//����������  virtual  ��ֹ�ڴ�й©
//������ָ��ָ�������������ø���ָ�����ٹ黹�ڴ�
//void test1(person p)���ں������λ��ʼ����ʱ���� void test2(person &p) ���ò��������ʱ���� ��*p����Ҳ������һ��
//class mm:public worker,public person ��д�̳з�ʽ��Ĭ��private
//���캯�� mm::mm(parameter):worker(����)��person��������

