#include<iostream>
#include<string>
#include<cmath>
#include<list>
#include<iomanip>
using namespace std;
class Student
{
	public:
		Student(){
			
		}
		~Student(){
			
		}
		void set()
		{
			string xing,ming;
			int xingbie,nianji;
			float gpa1;
			cout<<"���������ѧ�����ա������Ա��꼶��gpa"<<endl;
		
			cin>>xing>>ming>>xingbie>>nianji>>gpa1;
			this->lastname=xing;
			this->firstname=ming;
			this->lastname=xing;
			this->sex=xingbie;
			this->grade=nianji;
			this->gpa=gpa1;
		}
		void show_myself()
		{
			cout<<"ѧ������:";
			cout<<firstname<<" "<<lastname;
			cout<<" �Ա�"; 
			if(sex==0)
			cout<<"woman";
			else if(sex==1)
			cout<<"man";
			cout<<" �꼶��";
			switch(grade)
			{
				case 1:
					cout<<"��һ";
					break;
				case 2:
					cout<<"���";
					break;
				case 3:
				    cout<<"����";
				    break;
				case 4:
					cout<<"����";
					break;
			}
			cout<<" gpa:";
			if(gpa>=4.0)
			cout<<"4.0"<<endl;
			else
			cout<<setprecision(1)<<fixed<<gpa<<endl;
		}
		void study_time(float x){
			this->gpa=gpa+log(x/60);
		}
	private:
		
		string firstname;
		string lastname;
		int sex;
		int grade;
		float gpa;
};
int main(void)
{
    list<Student> Student_list;
	Student std[100];
	int i;
    list<Student>::iterator it;
    cout<<"ע��Ӣ����ǰ���������������գ��Ա���0��1��ʾ��0����Ů�ԣ�1�������ԣ���"<<endl; 
	cout<<"    �꼶��1����һ����2���������3��������4�����ģ���ʾ"<<endl;
	cout<<"ѧϰʱ�䳬��60������gpa������ѧϰ���Ӳ���60������gpa����"<<endl; 
    for(i=0;i<5;i++)
	{
		cout<<"�����"<<i+1<<"��ѧ���Ļ�����Ϣ"<<endl;
		std[i].set(); 
	}	
    for(i=0;i<5;i++)
    {
    	std[i].show_myself();
	}
	for(i=0;i<5;i++)
	{
		int study_time;
		cout<<"�����"<<i+1<<"��ѧ����ѧϰʱ��"<<endl;
		cin>>study_time; 
		std[i].study_time(study_time);
		Student_list.push_back(std[i]);
	}
    for(it=Student_list.begin();it!=Student_list.end();it++)
	{
		(*it).show_myself();
	}
	return 0;
}
