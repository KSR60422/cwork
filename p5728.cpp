#include<stdio.h>
#include<math.h>
int main(void){
	int n=0;
	scanf("%d",&n);
	int a[n][3]={0};
	int cnt=0;
	int sum[n]={0}; 
	for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
			sum[i]=a[i][0]+a[i][1]+a[i][2];
	}
	for (int i=0;i<n;i++)	{
		for (int j=i+1;j<n;j++){
			if (abs (a[i][0] - a[j][0]) <= 5 && 
				abs (a[i][1] - a[j][1]) <= 5 && 
				abs (a[i][2] - a[j][2]) <= 5 && 
				abs (sum[i] - sum[j]) <= 10)
			{
				cnt++;
			}
		}
	}
		printf("%d",cnt);
		return 0;
}
