#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int a[n]={0};
	for (int k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	int length=sizeof(a)/sizeof(int);
	int temp=0;
	int cnt=0;
	for (int i=1;i<length;i++){
		temp=a[i];
	for (int j=i-1;j>=0 && a[j]>a[j+1];j--){
		a[j+1]=a[j];
		a[j]=temp;
	}
	} 
	int sum=0;
for (int o=0;o<n;o++){
		 sum=sum+a[o];
	}
	
	sum=sum-a[0]-a[n-1];
	int w=n-2;
	double p=1.0*sum/w;
	printf("%.2lf",p);
	
	return 0;
}
