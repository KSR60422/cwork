#include<stdio.h>
int main (void){
	int n=0;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	int length=sizeof(arr)/sizeof(int);
	int temp=0;
	
	for (int k=1;k<length;k++){
		temp=arr[k];
	for (int j=k-1;j>=0 && arr[j]>arr[j+1];j--){
		arr[j+1]=arr[j];
		arr[j]=temp;
	}
    }
	printf("%d",arr[n-1]-arr[0]);
	return 0;
}
