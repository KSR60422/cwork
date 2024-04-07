#include<stdio.h>
int main(){
	int n=0,m=0;
	scanf("%d %d",&n,&m);
	int a[10000]={0};
	int min=0;
	int sum=0;
	int ans=100000;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<=n-m;i++){
		for (int j=i;j<i+m;j++){
			sum=sum+a[j];
			
		}
		
		if (sum<ans){
			ans=sum;
		}
		sum=0;
	}
	printf("%d",ans);
	return 0;	
}
