/*C: ת�þ���
	����

	��һ�������ת�þ���

	����

	��������m��n�ֱ����һ��������к��С�������m*n��������Ϊ�����Ԫ�ء�

	���

	��m��n�ܹ��ɾ��������ԭ������ת�þ��󣻷������NO��

	ע�⣺����������������֮����һ���ո����*/
#include<iostream>
int mainC()
{
	int m, n;
	std::cin >> m >> n;
	if (m*n!=0)
	{
		int a[100][100];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				std::cin >> a[i][j];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				std::cout << a[i][j]<<" ";
			std::cout << std::endl;
		}
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
				std::cout << a[i][j]<<" ";
			std::cout << std::endl;
		}
	}
	else
		std::cout << "NO";
	return 0;

}