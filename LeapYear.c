//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
#include <stdio.h>
int main() {
    int i,n,y;
    printf("���������ж���ݵĸ���\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	printf("���������\n");
    	scanf("%d",&y);
   		if(y%100!=0){
			if(y%4==0)
				printf("%d������\n",y);
			else
				printf("%d��������\n",y);
		}
		else{
			if(y%400==0)
				printf("%d������\n",y);
			else
				printf("%d��������\n",y);
		}
    }
}
