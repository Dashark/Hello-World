#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

//��������������
void fun(int *a, int *b) {
	int c = 0;
	 c = *a;
	*a = *b;
	*b = c;


}
void fun1(int &a, int &b) {
	int c = 0;
	c = a;
	a = b;
	b = c;

}//���ÿ���ֱ���滻��
using namespace std;
//ָ������Ӧ�ã����� *&ָ�������� =ָ�룺


//�����ṹ��
typedef struct {
	int x;
	int y;

}Coor;


const int x = 3;//���ɱ��ı�ֵ��
const int *pp = NULL;
int const *pp1 = NULL;//������ȼۣ�
int * const pp2 = NULL;//not equvilant;
//const he yinyong
//ָ��ָ��const ���εı��� Ӧ����const int a=3  const int const *p=&a;
//����Ĭ��ֵ ʵ�λḲ��Ĭ��ֵ Ĭ��ֵ������������  ���ں������أ�����ͬ�������£�ͬ�� �������������Ͳ�ͬ��
//int getmax(int x,int y,int z);  
//int getmax(double x,double y);
//�������� ����ʱ���������������� �ݹ鲻��ʹ�� inline int ...

//�ڴ������Դ ����ϵͳ ���� �黹

//����new �ͷ�delete 
//int *p=new int[10] ;
//if (NULL==p){
// //�ڴ����ʧ���ˣ�
//}
//delete []p;
//c  void *malloc(size_t size);
//c  void free(void *malloc);����ʹ��

int main() {




	int a = 3;
	int *p = &a;
	int *&q = p; //ָ���������ã�*&q=p   *q��ֵ��
	*q = 20;
	cout << a << endl;
	int &b = a;//���ñ����ʼ��
	b = 10;
	Coor c1;
	Coor &c = c1;//�ṹ���Ӧ������ �����Ĳ���
	c.x = 10;
	c.y = 20;
	cout << c1.x << " " << c1.y << endl;
	a = 20;
	int cc = 30;
	cout << a << endl;
	cout << b << endl;
	fun1(a, cc);
	cout << a << endl;
	cout << cc << endl;
	
	
	
	
	
	getchar();
	return 0;
}