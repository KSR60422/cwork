#include<stdio.h>
int main(){
	int n=0,k=0;
	scanf("%d %d",&n,&k);
	int a[10010]={0};
	int b[10010]={0};
	int i,cnt1=0,cnt2=0;
	
	for (i=0;i<n;i++){
		if ((i+1)%k==0){
			a[i]=i+1;
			cnt1++;
		}
		else {
			b[i]=i+1;
			cnt2++;
		}
	}
	
	int sum1=0,sum2=0;
	int j=0;
	for (j=0;j<10010;j++){
		sum1+=a[j];
		sum2+=b[j];
	}
	
	double n1=1.0*sum1/cnt1;
		double n2=1.0*sum2/cnt2;
	printf("%.1lf %.1lf",n1,n2);
	
	
		return 0;
}
