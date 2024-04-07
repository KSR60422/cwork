#include<stdio.h>
int main(void){
	int sum=0;
	int w=0;
	int x=0;
	int h=0;
	scanf("%d %d %d",&w,&x,&h);
	int q=0;
	scanf("%d",&q);
	int a[w][x][h];
	for (int i=0;i<w;i++){
		for (int j=0;j<x;j++){
			for (int k=0;k<h;k++){
				a[i][j][k]=1;
			}
		}
	}
	for (int z=1;z<=q;z++){
		int x1=0;
		int y1=0;
		int z1=0;
		int x2=0;
		int y2=0;
		int z2=0;
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		for (int i=x1-1;i<=x2-1;i++){
		for (int j=y1-1;j<=y2-1;j++){
			for (int k=z1-1;k<=z2-1;k++){
				a[i][j][k]=0;
			}
		}
	}
		
	}
	
	for (int i=0;i<w;i++){
		for (int j=0;j<x;j++){
			for (int k=0;k<h;k++){
				sum=sum+a[i][j][k];
			}
		}
	}		
	printf("%d",sum);
	return 0;
}
