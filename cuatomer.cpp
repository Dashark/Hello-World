#include"customer.h"
#include<iostream>
using namespace std;
customer::customer(string name, int age) {
	m_age = age;
	m_strname = name;

}

void customer::printinfo()const {
	cout << "������" << m_strname << endl;
	cout << "���䣺" << m_age << endl;
	cout << endl;
}
