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
}
int Sub(int mon,int dat)
{
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
}

void Lunar(int sub)
{
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
}

