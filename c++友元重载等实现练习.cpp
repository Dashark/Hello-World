#include<iostream>
#include<stdio.h>
#include"timefor.h"
#include"coordinate.h"
using namespace std;

//��Ԫȫ�ֺ���:1
//��Ԫ��Ա����:2 ��Ҫ������������

//��������ر����Ǻ�������
//һԪ���������  һ����������eg:-,++;//���������ã�int������ʶ��
//��Ԫ�������غͳ�Ա�������أ�


void printtime(time &t);//1

 int main() {
	
	
	 time t(123, 213, 12);
	 printtime(t);
	 coordinate coor1(3, 5);
	 
	/*
	 -coor1;
  int p1 = coor1.getx();
	 
	 int p2 = coor1.gety();
	 cout << p1 << p2 << endl;
	 ++coor1;
	 p1 = coor1.getx();
	 p2 = coor1.gety();
	 cout << p1 << p2 << endl;*/
	 coordinate coor2(2, 3);
	/* cout << coor2.getx() << " " << coor2.gety() << endl;
	 
	 cout << (coor2++).getx() << endl;
	 cout << (coor2++).gety() << endl;*/
	 
	 coordinate coor3(0, 0);
	 coor3 = coor2 + coor1;
	// cout << coor1.getx() << " " << coor1.gety() << endl;
	 //cout << coor2.getx() << " " << coor2.gety() << endl;
	// cout << coor3.getx() << " " << coor3.gety() << endl;
	 cout << coor1 <<endl;
	 cout << coor2 <<endl;
	 cout << coor3[0] <<" "<< coor3[1] << endl;


	 getchar();

	return 0;
}
void printtime(time &t){
	cout << t.m_hour <<":"<< t.m_min << ":"<<t.m_sec << endl;

}

