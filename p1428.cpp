#include<stdio.h>
int main(void){
	int n=0;
	scanf("%d",&n);
	int a[n]={0};
	int b[n]={0};
	int cnt=0;
	for ( int i=0 ;i<n ;i++){
		scanf("%d",&a[i]);
	}
	for ( int j=0 ;j<n ;j++){
		for (int k=0 ; k<=j ; k++){
			if (a[j]>a[k]){
				cnt ++;
			}
		}
		b[j]=cnt;
		cnt=0;
	}
	
	for ( int i=0 ;i<n-1 ;i++){
	printf("%d ",b[i]);
	}
	printf("%d",b[n-1]);
		return 0;
}
