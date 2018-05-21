#ifndef MYQUEUE_H
#define MYQUEUE_H

#include"customer.h"
class myqueue {
public:
	myqueue(int queuecapacity); //��������
	virtual ~myqueue();//���ٶ���
	void clearqueue();//��ն���
	bool queueempty() const;//�ж��Ƿ�Ϊ��
	bool queuefull() const;
	int queuelength() const;//���г���
	bool enqueue(customer element);//��Ԫ�ض�β
	bool dequeue(customer &element);//��Ԫ�س���
	void queuetraverse();//��������visit function
private:
	customer *m_pqueue;//��������ָ��
	int m_queuelen;//Ԫ�ظ���
	int m_queuecapacity;//��������
	int m_ihead;
	int m_tail;

};	


#endif

