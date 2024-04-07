#include <stdio.h>
long long gcd(long long a, long long b);
int main (){
	long long a=0;
	long long b=0;
	long long c=0;
	scanf("%d %d %d",&a,&b,&c);
	long long max=0;
	
	long long min=0;
	if (a>=b  && b>=c){
		max=a;
	
		min=c;
	}
	if ( a>=c && c>=b){
		max=a;
	
		min=b;
	}
	if (b>=a && a>=c ){
		max=b;
	
		min=c;
	}
		if (b>=c && c>=a){
		max=b;
	
		min=a;
	}
		if (c>=b && b>=a){
		max=c;
	
		min=a;
	}
		if (c>=a && a>=b){
		max=c;
	
		min=b;
	}
		long long z=gcd (max, min);
		printf("%d/%d",min/z,max/z);

	
		return 0;
}
long long gcd(long long a, long long b){
long long z=b;
while ( a%b!=0){
	z=a%b;
	a=b;
	b=z;
}
return z;

	
}

