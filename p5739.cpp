#include<stdio.h>
#include<string.h>

int main(){
	int n=0;
	scanf("%d",&n);
	long long ret=1;
	for (int i=1;i<=n;i++){
		ret=ret*i;
	}
	
	printf("%lld",ret);
	return 0;
}
