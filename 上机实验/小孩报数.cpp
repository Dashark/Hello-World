//G: С����������
//��N��С��Χ��һȦ�������Ǵ�1��ʼ���α�ţ���ָ���ӵ�W����ʼ������������S��ʱ����С�����У�Ȼ�����һ��С����ʼ���������Ǳ���S�����У�����ظ���ȥ��ֱ�����е�С�������У�����������S��ʱ��ѭ������������С�����е�˳��
//Input
//��һ������С��������N��N<=64�� 
//������ÿ������һ��С��������(����������15���ַ�) 
//���һ������W,S (W < N)���ö���","���
//Output
//���������С����˳����е�˳��ÿ�����һ������
// 
// 
//Sample Input
//5
//Xiaoming
//Xiaohua
//Xiaowang
//Zhangsan
//Lisi
//2,3
//Sample Output
//Zhangsan
//Xiaohua
//Xiaoming
//Xiaowang
//Lisi

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n; cin >> n;
	string name[n];
	for(int i = 0;i < n;i++) cin >> name[i];
	int w,s;
	scanf("%d,%d",&w,&s);
	int alive = n,index = w-1;
	while(alive>0)
	{
		int count = 1;
		while(count < s)
		{
			if(name[index]!="out")
			{
				count++;
			}
			index = (index+1)%(n);
		}
		while(name[index]=="out") index = (index+1)%(n);
		cout << name[index] << endl;
		name[index] = "out";
		index = (index+1)%(n);
		alive--;
	}
	return 0;
}
