#include<iostream>
#include<cstring>
#include<cstdlib>
#include"myqueue.h"
#include"customer.h"
//����  �Ƚ��ȳ� ���ڴ�����
//��ǰ��λ    ��ͷָ��ı�
//��ͨ�����ڴ��˷�  
//���û��ζ��� ����ͷ  ����β
//˳ʱ��  ��ʱ��  ָ��


using namespace std;


int main() {
	/*myqueue *p = new myqueue(4);
	p->enqueue(12);
	p->enqueue(100);
	p->enqueue(199);
	p->enqueue(122);
	

	p->queuetraverse();
	int e = 0;
	p->dequeue(e);
	cout << e << endl;
	p->dequeue(e);
	cout << e << endl;

	p->queuetraverse();//������������
	cout << "clear" << endl;
	p->clearqueue();
	p->queuetraverse();
	p->enqueue(2002);
	p->enqueue(1998);
	p->queuetraverse();
	int i = p->queuelength();
	cout << i << endl;
	delete p;
	p = NULL;*/
	myqueue *p =new myqueue(4);
	customer c1("zhangsan", 20);
	customer c2("zhangsan1", 21);
	customer c3("zhangsan2", 19);

	p->enqueue(c1);
	p->enqueue(c2);
	p->enqueue(c3);
	p->queuetraverse();

	customer c4;
	p->dequeue(c4);
	c4.printinfo();
	

	system("pause");
	return 0;
}