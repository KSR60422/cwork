#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double sum;
	if (n<=150){
		sum=0.4463 *n;
	}
	else if(n<400){
		sum=0.4463 *150+(n-150)* 0.4663 ;
	}
	else {
		sum=0.4463 *150+250*  0.4663+(n-400)*0.5663;

	}
	
	printf("%.1lf",sum);
	
		return 0;
}
