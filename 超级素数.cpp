#include<stdio.h> 
Primenumber(int n)
{
	if(n==1||n==0)
	{
		return 0;
	}
	else
	{
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
		}
	
	}
	return 1;
}
int main()
{
	int a,b,c,m;
	int num,sum,max;
	num=0,sum=0,max=0;
	
	for(m=100;m<=999;m++)
	{
			a=m%10;
			b=m/10%10;
			c=m/100;
			int x,y,z;
	        x=a+b+c;
	        y=a*b*c;
	        z=a*a+b*b+c*c;
			if((m<1000)&&(Primenumber(m)==1)&&(Primenumber(x)==1)&&(Primenumber(y)==1)&&(Primenumber(z)==1))
			{
				num+=1;
				sum+=m;
				max=m;
			}
	}
	printf("[100,999]֮�ڳ��������ĸ���Ϊ%d\n",num);
	printf("[100,999]֮�����г�������֮��Ϊ%d\n",sum);
	printf("[100,999]֮�����ĳ�������Ϊ%d\n",max);
	return 0;
 } 
