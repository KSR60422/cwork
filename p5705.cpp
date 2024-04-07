#include<stdio.h>
#include<math.h>
int main(){
	double a;
	scanf("%lf",&a);
	a*=10;
	
	int cnt;
	double sum;
	for (cnt =3;cnt!=-1;cnt--)
	{
		int t=a;
		t%=10;
		a/=10;	
			
		sum +=t*pow(10,cnt);
	}
	printf("%.3lf",sum/1000);
	
		return 0;
}
