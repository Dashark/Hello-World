#include"utility.h"
#include"encrypt.h"
#include"iostream"

int main()
{
	using namespace std;
	int choice = 1;
	char FO[256],CO[256];
	ENCRYPT MO;

	while (choice!=3)
	{
		cout << "1.���ܡ������Ѿ�������ı������м��ܺ������" << endl;
		cout << "2.���ܡ������Ѿ�������Ѽ��ܵ��ı����ܺ������" << endl;
		cout << "3.�˳������˳����С�" << endl;
		cout << "��ѡ��";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
		{
			cout << "�������ı�����";
			cin >> FO;
			strcpy(CO, MO.Encode(FO).CStr());
			cout << "���ܴ���" << CO << endl<<endl;
			break;
		}
		case 2:
		{
			cout << "��������ܴ�";
			cin >> FO;
			strcpy(CO, MO.Decode(FO).CStr());
			cout << "���ܴ���" << CO << endl<<endl;
			break;
		}
		}

	}
	cin.get();
	return 0;
}