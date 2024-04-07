#include<stdio.h>
int main(){
	int m=0,n=0;
	scanf("%d %d",&m,&n);
	int a[10]={0};
	for(int i=m;i<=n;i++){
		for(int tmp=i;tmp;tmp/=10)
		{
			a[tmp%10]++;
		} 
	
	}
	for(int i=0;i<=9;i++){
		printf("%d ",a[i]);
	}


	
	return 0;
	
}
