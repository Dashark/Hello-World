//素数是只有1和本身是因子的数
//2018/11/14 更新
//����һ����n ��ʾҪ����n���� ���ж�ÿ�����ǲ������� 
#include <stdio.h>
int main() {
	int i,n,m,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=1;j<=m;j++){
			if(j!=1&&j!=m&&m%j==0){
				break;
			}
		}
		if (j-1==m)
		printf("%d������\n",m);
		else
		printf("%d��������\n",m);
	}
	
}
