#include<stdio.h>
int main(void){
	int a[40][40];
	for (int i=0;i<40;i++){
			for (int j=0;j<40;j++){
				a[i][j]=0;
			}
	}
	int n=0;
	scanf("%d",&n);
	int x=0;int y=n/2;
	for (int i=1;i<=n*n;i++){
		a[x][y]=i;
		//总之你想个办法判断这个傻卵右上角的情况
		if (!a[(x-1+n)%n][(y+1)%n] ) 
		{
		x=(x-1+n)%n;
		y=(y+1)%n;
		}	
		else {
			x=(x+1)%n;
		}
	}
	
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ",a[i][j]);
		}
	printf("\n"); 
	}
		
		
		
		
		
			return 0;
}
