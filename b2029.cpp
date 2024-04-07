#include<stdio.h>
int main() {
	int h,r;
	scanf("%d %d",&h,&r);
	double v=3.14*r*r*h;
	
	if ( 20000%(int)v==0 ){
		int a=20000/v;
		printf ("%d",a);
	}
	else {
		int a=20000/v+1;
		printf ("%d",a);
	}
	
	return 0;
}
