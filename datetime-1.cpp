#include <stdio.h>
static char day_code[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},//�������·�����
    {0,31,29,31,30,31,30,31,31,30,31,30,31},//�����·�����
};
static int year_code[]={
					 0x09,0x6d,0x46, //1970
					 0x54,0xAe,0xBB, //1971
					 0x04,0xAd,0x4f, //1972
					 0x0A,0x4d,0x43, //1973
					 0x4d,0x26,0xB7, //1974
					 0x0d,0x25,0x4B, //1975
					 0x8d,0x52,0xBf, //1976
					 0x0B,0x54,0x52, //1977
					 0x0B,0x6A,0x47, //1978
					 0x69,0x6d,0x3C, //1979
					 0x09,0x5B,0x50, //1980
					 0x04,0x9B,0x45, //1981
					 0x4A,0x4B,0xB9, //1982
					 0x0A,0x4B,0x4d, //1983
					 0xAB,0x25,0xC2, //1984
					 0x06,0xA5,0x54, //1985
					 0x06,0xd4,0x49, //1986
					 0x6A,0xdA,0x3d, //1987
					 0x0A,0xB6,0x51, //1988
					 0x09,0x37,0x46, //1989
					 0x54,0x97,0xBB, //1990
					 0x04,0x97,0x4f, //1991
					 0x06,0x4B,0x44, //1992
					 0x36,0xA5,0x37, //1993
					 0x0e,0xA5,0x4A, //1994
					 0x86,0xB2,0xBf, //1995
					 0x05,0xAC,0x53, //1996
					 0x0A,0xB6,0x47, //1997
					 0x59,0x36,0xBC, //1998
					 0x09,0x2e,0x50, //1999
					 0x0C,0x96,0x45, //2000
					 0x4d,0x4A,0xB8, //2001
					 0x0d,0x4A,0x4C, //2002
					 0x0d,0xA5,0x41, //2003
					 0x25,0xAA,0xB6, //2004
					 0x05,0x6A,0x49, //2005
					 0x7A,0xAd,0xBd, //2006
					 0x02,0x5d,0x52, //2007
					 0x09,0x2d,0x47, //2008
					 0x5C,0x95,0xBA, //2010
					 0x0B,0x4A,0x43, //2011
					 0x4B,0x55,0x37, //2012
					 0x0A,0xd5,0x4A, //2013
					 0x95,0x5A,0xBf, //2014
					 0x04,0xBA,0x53, //2015
					 0x0A,0x5B,0x48, //2016
					 0x65,0x2B,0xBC, //2017
					 0x05,0x2B,0x50, //2018
					 0x0A,0x93,0x45, //2019
					 0x47,0x4A,0xB9, //2020

	};
int* Conversion(int year,int month,int day);
char get_moon_day(char month_p,int table_addr);
bool isLeap(int year);
int main()
{
	char yue[12][5]={"��","��","��","��","��","��","��","��","��","ʮ","ʮһ","��"};
	char ri[30][5]={"��һ","����","����","����","����","����","����","����","����","��ʮ",
	"ʮһ","ʮ��","ʮ��","ʮ��","ʮ��","ʮ��","ʮ��","ʮ��","ʮ��","��ʮ",
	"إһ","إ��","إ��","إ��","إ��","إ��","إ��","إ��","إ��","��ʮ"} ;
	printf("�����빫�����硰2020��1��1�ա���");
	int year,mon,dat,totalday;
	scanf("%d��%d��%d��",&year,&mon,&dat);
	int *p=Conversion(year,mon,dat);
	if(*(p+2)==*(p+3)-1)
	printf("����:��%s��%s\n",yue[*p-1],ri[*(p+1)-1]);
	else
	printf("����:%s��%s\n",yue[*p-1],ri[*(p+1)-1]);
	return 0;
}


bool isLeap(int year){
	if((year%4==0&&year%100!=0)||(year%400==0))
	return 1;
	else
	return 0;
}

char get_moon_day(char month_p,int table_addr)
{
 char temp;
 switch (month_p){
	 case 1:{temp=year_code[table_addr]&0x08;
	 if (temp==0)return(0);else return(1);}
	 case 2:{temp=year_code[table_addr]&0x04;
	 if (temp==0)return(0);else return(1);}
	 case 3:{temp=year_code[table_addr]&0x02;
	 if (temp==0)return(0);else return(1);}
	 case 4:{temp=year_code[table_addr]&0x01;
	 if (temp==0)return(0);else return(1);}
	 case 5:{temp=year_code[table_addr+1]&0x80;
	 if (temp==0) return(0);else return(1);}
	 case 6:{temp=year_code[table_addr+1]&0x40;
	 if (temp==0)return(0);else return(1);}
	 case 7:{temp=year_code[table_addr+1]&0x20;
	 if (temp==0)return(0);else return(1);}
	 case 8:{temp=year_code[table_addr+1]&0x10;
	 if (temp==0)return(0);else return(1);}
	 case 9:{temp=year_code[table_addr+1]&0x08;
	 if (temp==0)return(0);else return(1);}
	 case 10:{temp=year_code[table_addr+1]&0x04;
	 if (temp==0)return(0);else return(1);}
	 case 11:{temp=year_code[table_addr+1]&0x02;
	 if (temp==0)return(0);else return(1);}
	 case 12:{temp=year_code[table_addr+1]&0x01;
	 if (temp==0)return(0);else return(1);}
	 case 13:{temp=year_code[table_addr+2]&0x80;
	 if (temp==0)return(0);else return(1);}
 }
}
int* Conversion(int year,int month,int day)
{
/*
month_p��Ϊ�·ݵ�ָ��leap�����Ƿ�����������ݣ�table_addr���������ݵ�year_code�еĵ�ַ��Ϣ��flag_y���ڴ�������ʱ�ı�־��
*/
 char temp1,temp2,temp3,month_p;
 int leap,temp4,table_addr,c;
 char flag_y;
 //��λyear_code���ݱ��ַ,Ҳ�����ҵ�������������Ϣ�����������1988�꣬���ҵ�1988����������ݡ�
 if(year<=2000)	
 table_addr=(year-1970)*3;
 else
 table_addr=(year-1970-1)*3;
 //��λ���ݱ��ַ��ɣ�����table_addr�д�ŵ����������ݵĵ�һ���ֽڵĵ�ַ��

 //ȡ���괺�����ڵĹ����·�
 temp1=year_code[table_addr+2]&0x60; //ֻ��ȡ�������ֽڵ�λ6��λ5������λ���㡣
 temp1=temp1/32;//������λ�����ƺ�temp1���ǵ��괺�����ڵĹ����·�
 //ȡ���괺�����ڵĹ����·����

 //ȡ���괺�����ڵĹ�����
 temp2=year_code[table_addr+2]&0x1f; //ֻ��ȡ�������ֽڵ�λ5��λ0
 //ȡ���괺�����ڵĹ��������

 // ���㵱�괺���뵱��Ԫ��������,����ֻ���ڹ���1�»�2��
 if(temp1==1){ //������һ��
 temp3=temp2-1; 
 } 
 else{//�����ڶ��£���Ҫ����һ�µ�31��
 temp3=temp2+31-1;
 }
 // ���㵱�괺���뵱��Ԫ�����������

 //�������������뵱��Ԫ��������
/*
�㷨ʾ���������������1988��3��5�ա���ô�����ж��Ƿ������꣬Ȼ�����3��֮ǰ�·ݵ������ͣ�������3�µ�5���1,(1�·�������)+(2�·�������)+(3�·�����)�õ� 31+29+5=63
*/
//�ж��Ƿ������꣬����leap=1��������leap=0
leap=isLeap(year);
temp4=0;//��������
for(c=1;c<month;++c)
temp4=temp4+day_code[leap][c];
temp4 = temp4+day;
 //�������������뵱��Ԫ�����������

 //�ж����������ڴ���ǰ���Ǵ��ں�
 if (temp4>temp3) //���������ڴ��ں����Ǵ��ڵ���ʹ����������������
 {
	 temp4-=temp3;//(����������Ԫ��������)��ȥ(������Ԫ��������)����(���������봺�ڵ�����)
	 month=1;//monthָʾ���·ݣ��������������·�
	/*
	month_pΪ�·�ָ��,����ָ���month��������ģ�month_pָ�����year_code�е������·����ݣ�month_p������13����Ϊ������£�������ͻ���13���¡���monthָ����������������·ݣ������5��monthֵ����5�����������ڴ��ں����Ǵ��ڵ���month_p�ĳ�ʼֵΪ1��
	*/
	 month_p=1; 
	 flag_y=0;//flag_y��Ϊ���������õ�
	 if(get_moon_day(month_p,table_addr)==0)//�жϴ�С��
	 temp1=29; //С��29��
	 else
	 temp1=30; //����30��
	 temp2=year_code[table_addr]&0xf0;//year_code�ĵ�һ���ֽڵ�λ7��λ4Ϊ�����·�
	 temp2=temp2/16; //������λ�������ݱ���ȡ����������·�,��Ϊ0�����������
	 while(temp4>temp1){//������������봺�ڵ��������ڵ�ǰ�����·ݵ�������temp1��ʼΪ���µ����� 
		 temp4-=temp1;
		 month_p+=1;
		/*
		����·ݵ��������·ݣ�������5�£���ô����������5�£�flag_y�����þ��Ǳ�֤��һ��ѭ��month��ֵ���䣬�ڶ���ѭ��month��1���Ӷ���֤��������5�¡�Ȼ��month_p��ֵ��1���Σ�month_p��ֵ���ܴﵽ13����Ȼ���£�������������13����
		*/
		 if(month==temp2)
		 {
		 	if(flag_y)month+=1;
		 	flag_y=1; 
		 }
		 else
		 month+=1;
		 if(get_moon_day(month_p,table_addr)==0)//�жϴ�С��
		 temp1=29;
		 else
		 temp1=30;
	 }
	 day=temp4;
 }
 else{
 	temp3-=temp4;//(����������Ԫ��������)��ȥ(������Ԫ��������)����(���������봺�ڵ�����)
	 month=12;//monthָʾ���·ݣ��������������·�
	/*
	month_pΪ�·�ָ��,����ָ���month��������ģ�month_pָ�����year_code�е������·����ݣ�month_p������13����Ϊ������£�������ͻ���13���¡���monthָ����������������·ݣ������5��monthֵ����5�����������ڴ��ں����Ǵ��ڵ���month_p�ĳ�ʼֵΪ1��
	*/
	 flag_y=0;//flag_y��Ϊ���������õ�
	 if(get_moon_day(month_p,table_addr)==0)//�жϴ�С��
	 temp1=29; //С��29��
	 else
	 temp1=30; //����30��
	 temp2=year_code[table_addr]&0xf0;//year_code�ĵ�һ���ֽڵ�λ7��λ4Ϊ�����·�
	 temp2=temp2/16; //������λ�������ݱ���ȡ����������·�,��Ϊ0�����������
	 if(temp2)
	 month_p=13; 
	 else
	 month_p=12;
	 while(temp3>temp1){//������������봺�ڵ��������ڵ�ǰ�����·ݵ�������temp1��ʼΪ���µ����� 
		 temp3-=temp1;
		 month_p-=1;
		/*
		����·ݵ��������·ݣ�������5�£���ô����������5�£�flag_y�����þ��Ǳ�֤��һ��ѭ��month��ֵ���䣬�ڶ���ѭ��month��1���Ӷ���֤��������5�¡�Ȼ��month_p��ֵ��1���Σ�month_p��ֵ���ܴﵽ13����Ȼ���£�������������13����
		*/
		 if(month==temp2)
		 {
		 	if(flag_y)
			 month-=1;
		 	flag_y=1; 
		 }
		 else
		 month-=1;
		 if(get_moon_day(month_p,table_addr)==0)//�жϴ�С��
		 temp1=29;
		 else
		 temp1=30;
	 }
	 day=temp1-temp3;
 } 
//������������
int a[]={month,day,temp2,month_p};
int *p=a;
return p;
}
                                
                                          
