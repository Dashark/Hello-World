<<<<<<< HEAD
#include<stdio.h>
int Sub(int mon,int dat);
void Lunar(int sub);
int main()
{
	printf("������2020��Ĺ������硰1��1�ա���");
	int mon,dat,sub;
	scanf("%d��%d��",&mon,&dat);
	sub=Sub(mon,dat);
	Lunar(sub);
	return 0;
=======
#include <iostream>
class DateTime {
private:
  static int sth;
  int year, month, day;
  int hour, minute, second;
public:
  DateTime();
  DateTime(int y, int m, int d, int hour, int minute, int second); 
  DateTime(const DateTime &dt);
  ~DateTime();
  static void showTime();
  void showMoon();  //��ҵ������ǰ����ת��Ϊũ����ʾ���� 
};

int DateTime::sth = 0;

int main() {
  DateTime dt, dt1(2020, 3, 27, 10, 40, 55);
  DateTime dt2(dt), &dt3 = dt;
  DateTime *dt4 = &dt;
  dt.showTime();
  dt1.showTime();
  dt2.showTime();
  dt3.showTime();
  dt4->showTime();
  return 0;
}
DateTime::DateTime()
{
  year = 2020; month = 3; day = 20;
  hour = 11; minute = 27; second = 55;
  sth = 11;
}
DateTime::DateTime(int y, int m, int d, int hour, int minute, int second)
{
  year = y; month = m; day = d;
  this->hour = hour; this->minute = minute; this->second = second;
}
DateTime::DateTime(const DateTime &dt)
{
  year = dt.year; month = dt.month; day = dt.day;
  hour = dt.hour; minute = dt.minute; second = dt.second;
>>>>>>> upstream/master
}
int Sub(int mon,int dat)
{
<<<<<<< HEAD
	int sub=0;
	switch(mon){
		case 1:break;
		case 2:sub+=31;
		break;
		case 3:sub+=60;
		break;
		case 4:sub+=91;
		break;
		case 5:sub+=121;
		break;
		case 6:sub+=152;
		break;
		case 7:sub+=182;
		break;
		case 8:sub+=213;
		break;
		case 9:sub+=244;
		break;
		case 10:sub+=274;
		break;
		case 11:sub+=305;
		break;
		case 12:sub+=336;
		break;
	}
	sub+=dat;
	return sub;
=======
  std::cout << " Go die, Ha~Ha~" << std::endl;
>>>>>>> upstream/master
}

void Lunar(int sub)
{
<<<<<<< HEAD
	char zhong[10][3]={"һ","��","��","��","��","��","��","��","��","ʮ"} ;
	if(sub<25){
		printf("����");
		sub+=6;
	}
	else if(sub<54){
		printf("һ��");
		sub-=24;
	}
	else if(sub<84){
		printf("����");
		sub-=53;
	}
	else if(sub<114){
		printf("����");
		sub-=83;
	}
	else if(sub<144){
		printf("����");
		sub-=113;
	}
	else if(sub<173){
		printf("������");
		sub-=143;
	}
	else if(sub<203){
		printf("����");
		sub-=172;
	}
	else if(sub<232){
		printf("����");
		sub-=202;
	}
	else if(sub<261){
		printf("����");
		sub-=231;
	}
	else if(sub<291){
		printf("����");
		sub-=260;
	}
	else if(sub<320){
		printf("����");
		sub-=290;
	}
	else if(sub<350){
		printf("ʮ��");
		sub-=319;
	}
	else {
		printf("ʮһ��");
		sub-=349;
	}
	
	if(sub<=10){
		printf("��");
		printf("%s",zhong[sub-1]);  
	}
	else if(sub<20){
		printf("ʮ");
		sub=sub-10;
		printf("%s",zhong[sub-1]); 
	}
	else if(sub=20)
		printf("��ʮ");
	else if(sub<30){
		printf("إ");
		sub=sub-20;
		printf("%s",zhong[sub-1]); 
	}
	else printf("��ʮ");
=======
  printf("��ǰʱ�䣺%d/%d/%d %d:%d:%d\n", year, month, day, hour, minute, second);
  std::cout << sth << std::endl;
>>>>>>> upstream/master
}

