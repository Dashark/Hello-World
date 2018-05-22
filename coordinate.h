#ifndef	COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;

//��һ���� - - ͬ������д����

//<<�����������ֻ������Ԫ�������أ�
//[]��������ֻ���ó�Ա�������أ�

class coordinate {
	friend coordinate operator+(coordinate c1,coordinate c2);//��Ԫ�������أ�
	friend ostream &operator<<(ostream &output, coordinate &coor);
	friend coordinate &operator-(coordinate &c);//��Ԫ�������أ�
public:
	coordinate(int x, int y);
	int getx();
	int gety();
	int operator[](int index);
	coordinate &operator++();//��Ա����ǰ��++��&����
	coordinate operator++(int);
	//coordinate operator+(coordinate &s);//��Ա������Ԫ��������أ�
	//coordinate& operator-();//��Ա�������� 
private:
	int m_ix;
	int m_iy;

};
/*coordinate& coordinate::operator-() {
	m_ix = -m_ix;
	this->m_iy = -this->m_iy;//������д����ͬ��

	return *this;//����ע��
}*/
coordinate coordinate::operator++(int) {
	coordinate old(*this);//�ÿ������캯�� ��һ�η��ص��¶���

	this->m_ix++;
	this->m_iy++;
	return old;


}
coordinate &coordinate::operator++(){
	m_ix++;
	m_iy++;
	return *this;

}

coordinate &operator-(coordinate &c) {
	c.m_ix = -c.m_ix;
	c.m_iy = -c.m_iy;
	return c;

}

coordinate::coordinate(int x, int y) {
	m_ix = x;
	m_iy = y;

}
int coordinate::getx() {
	return m_ix;

}
int coordinate::gety() {
	return m_iy;
}
/*coordinate coordinate::operator+(coordinate &s) {//��Ա������Ԫ���������
	coordinate temp(0,0);
	temp.m_ix = this->m_ix + s.m_ix;
	temp.m_iy = this->m_iy + s.m_iy;
	return temp;

}*/
coordinate operator+(coordinate c1, coordinate c2) {
	coordinate temp(0, 0);
	temp.m_ix = c1.m_ix + c2.m_ix;
	temp.m_iy = c1.m_iy + c2.m_iy;
	return temp;
}
ostream &operator<<(ostream &output, coordinate &coor) {
	output << coor.m_ix << " " << coor.m_iy;
	return output;

}

int coordinate::operator[](int index) {
	if (index == 0) {
		return m_ix;

	}
	if (index == 1) {
		return m_iy;
	}

}

#endif 
