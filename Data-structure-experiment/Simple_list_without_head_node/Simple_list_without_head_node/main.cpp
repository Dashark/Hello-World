#include"utility.h"
#include"Simple_list_without_head_node.h"
#include<iostream>



int main()
{
	using namespace std;
	int choice, position;
	NOHEAD<double>la, lb;
	double e;

	cout << "1.�������Ա�" << endl;
	cout << "2.��ʾ���Ա�" << endl;
	cout << "3.�������Ա�" << endl;
	cout << "4.����Ԫ��ֵ��" << endl;
	cout << "5.ɾ��Ԫ�ء�" << endl;
	cout << "6.����Ԫ�ء�" << endl;
	cout << "7.�˳�" << endl;
	cout << "����������Ҫ���еĲ���:";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << endl << "����e��e=0ʱ�˳���: ";
		cin >> e;
		while (e != 0)
		{
			la.Insert(la.Length() + 1, e);
			cin >> e;
		}

		break;
	}
	case 2:
	{
		lb = la;           //�Ը�ֵ��������в���
		lb.Traverse(Write<double>);//����Write��������double������ʾ���Ա�

		break;
	}
	case 3:
	{
		cout << endl << "������Ԫ��λ�ã�";
		cin >> position;
		if (la.GetElem(position, e) == NOT_PRESENT)
			cout << "Ԫ�ز��洢��" << endl;
		else
			cout << "Ԫ�أ�" << e << endl;
		break;
	}
	case 4:
	{
		cout << endl << "������Ԫ��λ�ã�";
		cin >> position;
		cout << endl << "������Ԫ��ֵ��";
		cin >> e;
		if (la.SetElem(position, e) == RANGE_ERROR)
			cout << "λ�÷�Χ����" << endl;
		else
			cout << "���óɹ���" << endl;
		break;
	}
	case 5:
	{
		cout << endl << "������Ԫ��λ�ã�";
		cin >> position;
		if (la.Delete(position, e) == RANGE_ERROR)
			cout << "λ�÷�Χ����" << endl;
		else
			cout << "��ɾ��Ԫ��ֵ��" << e << endl;

		break;
	}
	case 6:
	{
		cout << endl << "������Ԫ��λ�ã�";
		cin >> position;
		cout << endl << "������Ԫ��ֵ��";
		cin >> e;
		if (la.Insert(position, e) == RANGE_ERROR)
			cout << "λ�÷�Χ����" << endl;
		else
			cout << "����ɹ�������Ԫ��ֵ��" << e << endl;
		break;
	}
	case 7:    break;

	}
	return 0;
}
