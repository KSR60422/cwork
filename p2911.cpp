#include<stdio.h>

int main(){
	int s1=0,s2=0,s3=0;
	scanf("%d %d %d",&s1,&s2,&s3);
	
	int sum=0;
	int a[100]={0};
	for(int i=1;i<=s1;i++)
    {
     for(int j=1;j<=s2;j++)
     {
         for(int k=1;k<=s3;k++)
         {
            a[i+j+k]++; 
         }
     }
    }
	int max=0;
    for(int i=99;i>=0;i--)
    {
        if(a[i]>=a[max])max=i;
    }
    printf("%d",max);

	return 0;
	
}
