/*F: ������
	����

	���������ַ���s��t���ж��Ƿ���Դ�s��ɾ��0�������ַ�(�����ַ�˳�򲻱�)�õ��ַ���t��

	����

	�ֱ����������ַ���s��t���ֱ�ռһ�С�

	���

	����ƥ�����������YES
	������ƥ�����������NO*/
#include<iostream>
#include<string>
int mainF()
{
	std::string str1,str2;
	std::cin >> str1;
	std::cin >> str2;
	if (str1.find(str2) != -1)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}