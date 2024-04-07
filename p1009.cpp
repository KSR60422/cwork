#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	long long sum=0;
	int t=n;
	int r=n;
	long long s=1;
	for (r=n;r>0;r--){
		for (t=n;t>0;t--)
		{
			s=s*t;
		
		}
			sum=s+sum;
		n=n-1;
		s=1;
		
	}
	printf("%d",sum);
	return 0;
}
