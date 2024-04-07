#include<stdio.h>
int main(){
	int k=0;
	scanf("%d",&k);
	int i=1;
	long long sum=0;
	int qwe=0;
	for (i=1; i<=k;i++){
	sum =sum+i*i;
	qwe+=i;
	if (qwe>=k){
		sum=sum-i*(qwe-k);
		break;
	}		
}
	printf("%d",sum);
		return 0;
}
