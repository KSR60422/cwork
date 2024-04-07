#include<stdio.h>
#include<string.h>
	int a[1280][1280];
	void  apo (int x,int r,int q){
		if(x==2) 
	{
		a[r][q]=0;
		return;
	}
	for(int i=r; i<=r+x/2-1; i++)
		for(int j=q; j<=q+x/2-1; j++)
			a[i][j]=0; 
apo(x/2,r+x/2,q);
apo(x/2,r+x/2,q+x/2); 
apo(x/2,r,q+x/2); 
	}
int main(){
	int n=0;
	int p=1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		p*=2; 
	for(int i=0; i<p; i++){
		for(int j=0; j<p; j++){
				a[i][j]=1; 
		}
	}
		
		apo(p,0,0);
	
	
		for(int i=0; i<p; i++){
		for(int j=0; j<p; j++){
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
