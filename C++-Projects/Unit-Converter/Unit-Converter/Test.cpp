#include<iostream>
#include<string>
#include"Unit.h"
void change(int num, std::string unit);
int main()
{
	int num;
	std::cout << "�ó����ʵ�����е�λ�Ļ���ת����" << std::endl << "���ƣ�kg��ǧ�ˣ���g���ˣ���mg�����ˣ���t���֣���q����������point���֣�" << std::endl << "Ӣ�ƣ�lb��������oz����˾����gr�������st��Ӣʯ����dr����������ct��������" << std::endl;
	std::string old_unit,new_unit;
	std::cout << "��������ֵ: ";
	std::cin >> num;
	std::cout << "������ɵ�λ: ";
	std::cin >> old_unit;
	std::cout << "�������µ�λ: ";
	std::cin >> new_unit;
	Value_Unit testone=Value_Unit(num, old_unit, new_unit);
	testone.Weight();
	return 0;
}

