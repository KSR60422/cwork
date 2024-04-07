#include<stdio.h>
int main (void){
	int n=0;
	scanf ("%d",&n);
	long long  a[50]={0,1,1};
	for (int t =3;t<=n;t++){
		a[t]=a[t-1]+a[t-2];
	}
	printf("%.2lf",(double)a[n]);
	return 0;
}
