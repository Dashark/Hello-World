#include"utility.h"
#include"matrix.h"
int main()
{
	int n;//����Ľ���
	cout << "���������Ľף�";
	do    //�������������1~19
	{
		cin >> n;
		if (n < 1 || n >= 20)
		{
			cout << "n��ֵӦ����1~19֮�䣬����������n:";
		}
	} while (n < 1 || n >= 20);
	Matrix<int>squre(n, n);//n*n�׷���
	int value = 1, side = n, i, j;//�趨��ǰҪ��������ֵΪ1����ǰ�����α߳�Ϊn��

	//����n*n�׵���������
	for (i = 1; i <= (n + 1) / 2; i++)
	{
		//���ɵ�i�������Σ������ĸ�������±�Ϊ��i,i����i+side-1,i+side-1����i+side-1,i����i,i+side-1��
		if (side == 1)
		{
			squre(1, 1) = value++;
		}
		else
		{
			for (j = i; j < i + side - 1; j++)
			{
				//���������ε���ߵı�
				squre(j, i) = value;
				value++;
			}
			for (j = i; j < i + side - 1; j++)
			{
				//���������ε��±ߵı�
				squre(i + side - 1, j) = value++;
			}
			for (j = i + side - 1; j > i; j--)
			{
				//���������ε��ұߵı�
				squre(j, i + side - 1) = value++;
			}
			for (j = i + side - 1; j > i; j--)
			{
				//���������ε��ϱߵı�
				squre(i, j) = value++;
			}
		}
		side = side - 2;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << setw(4) << squre(i, j);
		}
		cout << endl;
	}
	cin.get();
	return 0;
}











