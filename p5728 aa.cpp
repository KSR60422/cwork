#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int a[n][3];
	int cnt=0;
	for (int i=0;i<n;i++){
			for (int j=0;j<3;j++){
				scanf("%d",&a[i][j]);
			}
	}
	for (int i=0;i<n;i++)	{
		for (int j=i+1;j<n;j++){
			if (a[i][0]-a[j][0]<=5&&a[i][0]-a[j][0]>=-5&&
			(a[i][1]-a[j][1]<=5&&a[i][1]-a[j][1]>=-5)&&
			(a[i][2]-a[j][2]<=5&&a[i][2]-a[j][2]>=-5)&&
			(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])<=10
			&&(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])>=-10
			) 
			{
				cnt++;
			}
		}
	}
		printf("%d",cnt);
		return 0;
}
