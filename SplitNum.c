//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int a[1000];
    int N,n,m,i,t,k,j;
    printf("��������Ҫ������ĸ���\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		N=k;t=1;
		while (N>9){
			N/=10;
			t*=10;
		}
		j=0;
		while (t>0){
			a[j]=k/t;
			k%=t;
			t/=10;
			j++;
		}
		m=j;
		for(j=0;j<m;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	} 
}
