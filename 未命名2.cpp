#include <stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int a[20][20];
	for (int i=0;i<20;i++){
		for (int j=0;j<20;j++){
			a[i][j]=0;		
		}
	}
	a[0][0]=1;a[1][0]=1;a[1][1]=1;
	for (int i=2;i<20;i++){
		for (int j=0;j<20;j++){
				a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<20;j++){
		if (a[i][j]!=0)	{
			printf("%d ",a[i][j]);
		}		
		}
		printf("\n");
	}
	 return 0;
}
