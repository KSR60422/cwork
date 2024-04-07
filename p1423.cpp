#include<stdio.h>
int main (void){
	double s=0.0;
	scanf("%lf",&s);
	double a=2.0;
	double sum=0;
	int cnt=0;
	for (sum=0;sum<s;cnt++){
		sum=sum+a;
		a=a*0.98;
	}
	printf("%d",cnt);
	
	return 0;
}
