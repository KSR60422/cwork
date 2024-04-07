#include<stdio.h>
int main(void){
	int n=0;
	scanf("%d",&n);
	int a[200]={0};
	a[0]=n;
	int i=0;
	if (n==1){
		printf("1");
	}
	else {
		for ( i=1;i<=200;i++){
		if (n==1){
		
			break;
		}
		else{
			if (n%2!=0){
			n=n*3+1;
			a[i]=n;
			continue;
		}
		else {
			n=n/2;
			a[i]=n;
			continue;
		}
		}
		
	}
	for (int j=i-1;j>-1;j--){
		printf("%d ",a[j]);
	}
	}
	return 0;
}
