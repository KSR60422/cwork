#include<stdio.h>
#include <stdlib.h>
int main (void){
	long long n=0;
	scanf("%lld",&n);
	if (n==0){
		printf("0");
	}
	if (n>0){
		long long num=n;
		long long reverse=0;
		while (num>0){
			int t=num%10;
			reverse=reverse*10+t;
			num=num/10;
		}
		printf("%lld",reverse);
	}	
	if (n<0){
		long long num;
		num=labs(n);
		long long reverse=0;
		while (num>0){
			int t=num%10;
			reverse=reverse*10+t;
			num=num/10;
		}
		printf("-%lld",reverse);
	}
		return 0;
}
