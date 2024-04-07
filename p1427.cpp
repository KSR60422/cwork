#include<stdio.h>
int main(void){
	int a[105]={1};
	int i=0;
	do {
		
		scanf("%d",&a[i++]);
	} while (a[i-1]!=0);
	for (int j=i-2;j>=0;j--)	{
		printf("%d ",a[j]);
	}
		return 0;
}
