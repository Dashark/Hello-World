#include<iostream>
#include<vector>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<map>
#include<list>
#include<deque>
#include<stack> 
//˳������ ��vector list deque ;
//�������� ��map set multimap multiset;
//�������䣺 stack queue priority_queue;
 
using namespace std;
int main()
{
	//.....vector.....//����ͷ�ļ�#include<vector>
	vector<int> vec_test1;//��ʼ�� ������
	vector<int> vec_test2(vec_test1);//��ʼ����ʽ ������vector��ʼ
	vector<int> vec_test3(108);//108��ֵΪ0������ ����Ϊ��108��4��������ʼ
	//<>�ڲ�ͬ�������������������ͣ�
		 
	bool isempty=vec_test1.empty();
	int lenth=vec_test1.size();
	vec_test1.push_back(1998);//����1998 
	lenth=vec_test1.size();
	cout<<vec_test1[0]<<" "<<lenth<<" "<<isempty<<endl;

	vec_test1.push_back(1007);//����1007 
	lenth=vec_test1.size();
	cout<<vec_test1[0]<<" "<<lenth<<" "<<isempty<<endl;

	vec_test1.push_back(108);//����108 
	lenth=vec_test1.size();
	cout<<vec_test1[0]<<" "<<lenth<<" "<<isempty<<endl;

	vec_test1.pop_back();//ɾ��ĩβԪ��
	lenth=vec_test1.size();
	cout<<vec_test1[0]<<" "<<lenth<<" "<<isempty<<endl;

	vec_test1.insert(vec_test1.end(),5,3);//��������5��3�� 
	lenth=vec_test1.size();
	//������ѧϰ�պ󲹳䣻

	cout<<vec_test1[0]<<" "<<lenth<<" "<<isempty<<endl;
	vec_test1.clear();
	//û��sort�� 
	
	//�������� ͨ��ȡ���ȷ����±���ߵ���������
	
	//.....list.....//����ͷ�ļ�#include<list>
 	list<int> list1;
 	list<int> list2(3);//��������Ԫ�أ�
	list<int> list3(4,2);//�����ĸ�ֵΪ����Ԫ�أ�
	list<int> list4(list2);
//	 
	list1.push_back(1);
//	list1.clear();
	list1.pop_back();
	int lenth1=list3.size();
	cout<<" "<<lenth1<<endl;
	//remove(int) ��ͬԪ��ȫ��ɾ����
	//reverse() ͬvector ��ת
	//sort �ṩ�������
	 
	//����ͨ��������
	
	//.....deque.....//�赼��ͷ�ļ�#include<deque>
	//���˴�ͷ�������ݱ����vector����
	
	//.....priorty_queue....//���ȶ���
	priority_queue<int> big;
	priority_queue<int,vector<int>,greater<int> > small;//���Ҫ�пո� 
	small.push(4);
	small.push(34);
	small.push(2);
	small.push(32);
	cout<<small.top()<<endl;
	small.pop();//������Ԫ�أ����ȼ���������big ��small ����
	cout<<small.empty()<<endl;
	
	cout<<small.top()<<endl;
	//���������������˳���ֵ��
	//�Զ������ȼ�
	//	struct node
	//{
	//int x, y;
	//friend booloperator< (node a, node b)
	//{
	//return a.x > b.x; //�ṹ���У�xС�����ȼ���
	//}
	//};
	//priority_queue<node>q;//���巽��
	//�ڸýṹ�У�yΪֵ, xΪ���ȼ���
	//ͨ���Զ���operator<���������Ƚ�Ԫ���е����ȼ���
	//�����ء�<��ʱ����ò�Ҫ���ء�>�������ܻᷢ���������
	queue<int> test_queue1;
	test_queue1.push(1);
	test_queue1.push(32);
	
//	push(x) ��xѹ����е�ĩ��
//	
//	pop() �������еĵ�һ��Ԫ��(�Ӷ�Ԫ��)��ע��˺������������κ�ֵ
//
//	front() ���ص�һ��Ԫ��(�Ӷ�Ԫ��)
//
//	back() �������ѹ���Ԫ��(��βԪ��)
//
//	empty() ������Ϊ��ʱ������true
//
//	size() ���ض��еĳ���
	
	cout<<small.size()<<endl;

	 
	
		
		return 0; 

} 
