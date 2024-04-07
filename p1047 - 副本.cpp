#include<stdio.h>
int main(void){
	int l=1;
	int a=0;
	int b=0;
	scanf("%d",&l);
	int sum=l+1;
	int c[sum]={0};
	int ans=0;
	for (int i=0;i<sum;i++){
		c[i]=1;
	}
	int m=0;
	scanf("%d",&m);
	for (int j=0;j<m;j++){
		scanf("%d %d",&a,&b);
		for (int k=a;a<=b;a++){
			c[a]=0;
		}
	}
	for (int o=0;o<sum;o++){
		ans=ans+c[o];
	}
		printf("%d",ans);
	return 0;
}
