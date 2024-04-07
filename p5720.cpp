#include<stdio.h>
#include<math.h>
int main(){
	int a=0;
	scanf("%d",&a);
	double t=a;
	int s=1;
	for (t=a;t>1;s++){
		t=t/2.0;
		t=floor(t);
		printf("%lf",t);
	}
	
	printf("%d",s);
	return 0;
}
