#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double p =(a+b+c)/2;
	double a1=p-a;
	double b1=p-b;
	double c1=p-c;
	double s1=p*a1*b1*c1;
	printf("%.1lf",sqrt(s1));
	
		
	
	return 0;
}
