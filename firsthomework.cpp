#include<iostream>     //�������� 
using namespace std;

int self(int a){
	int i,b=0;
	
	if(a==2)
	b=1;

	for(i=2;i<a;i++){
		if(a%i==0)
		{
			b=0;
			break;
		}else b=1;
		
	}

	return b;
	
}//�ж�һ���������ǲ������� ����Ϊ1������Ϊ0 

int sum(int a){
	int hun,ten,one,sum,i,b=0;
	hun=a/100;
	ten=(a-100*hun)/10;
	one=a-100*hun-10*ten;
	sum=hun+ten+one;
	
	if(a==2)
	b=1;
	
	for(i=2;i<sum;i++){
		if(sum%i==0)
		{
			b=0;
			break;
		}else{b=1;} 
		
	}

	return b;
	}//�ж��������ֺ��Ƿ�Ϊ��������Ϊ1������Ϊ0 
	
	
	
int mul(int a){
	int hun,ten,one,mul,i,b=0;
	hun=a/100;
	ten=(a-100*hun)/10;
	one=a-100*hun-10*ten;
	mul=hun*ten*one;
	
	if(a==2)
	b=1;
	
		for(i=2;i<mul;i++){
		if(mul%i==0 || hun == 0 || ten == 0 || one == 0)
		{
			b=0;
			break;
		}else{b=1;} 
		
	}

	return b;//�״��������� 
	
}//�ж���������֮�� �Ƿ�Ϊ���� 


int square_add(int a){
	int hun,ten,one,mul_add,i,b=0;
	hun=a/100;
	ten=(a-100*hun)/10;
	one=a-100*hun-10*ten;
	mul_add=hun*hun+ten*ten+one*one;
	
	if(a==2)
	b=1;
	
		for(i=2;i<mul_add;i++){
		if(mul_add%i==0)
		{
			b=0;
			break;
		}else{b=1;}
		
	} 

	return b;
	
	
	
}//��������ƽ�����Ƿ�Ϊ���� 









int main()
{
	int num,count=0,summ=0,i;
	int a[900];
	
	for(num=100;num<1000;num++)
	{
		if(self(num) * sum(num) * mul(num) * square_add(num))//�ж��Ƿ�Ϊ�������� 
		{
			count++;//�������������� 
			a[count-1]=num;//�����г�������װ������ 
		}
		
	} 
	
	for(i=0;i<count;i++)
	{
		summ+=a[i];
	}//�󳬼������ĺ�
	
	cout<<"���������ĸ���:"<< count << endl ;
	cout<<"���г�������֮�ͣ�"<< summ <<endl ;
	cout << "���ĳ�������:" << a[count-1] << endl ;
	
	

	
	
	
	
	
	
	return 0;
 } 
