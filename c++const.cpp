#include<iostream>
#include<string>
using namespace std;

//��ʼ���б� ��ʼ��const�������Ա��
//����Ա���� void changex() const;�����޸����ݳ�Ա��ֵ
//������������Ϊ���� 
//const ���� ʵ��   Ȼ����ú����ǳ���Ա����
//
class line {
public:
	line(int x1, int y1, int x2, int y2);
	~line();
	void setA(int x1, int y1);
	void setB(int x2, int y2);
	void printinfo();
private:
//	const coordinate m_coora;
//	coordinate m_coorb;

};
class coordinate {
public:
	coordinate(int x, int y);
	int getx();
	int gety();
	void printinfo() const;
private:
	int m_ix;
	int m_iy;
};
coordinate::coordinate(int x, int y) {
	m_ix = x;
	m_iy = y;

}
int coordinate::getx(){
	return m_ix;
}
int coordinate::gety() {
	return m_iy;
}
void coordinate::printinfo()const {
	cout << m_ix << " " << m_iy << endl;
}
int main() {
	coordinate coor1(3, 5);
	const coordinate &coor2 = coor1;//����Ա����
	const coordinate *pcoor = &coor1;
	coor1.printinfo();
	coor2.printinfo();//ֻ�ܵ��ó���Ա����
	pcoor->printinfo();
	getchar();
	return 0;

}