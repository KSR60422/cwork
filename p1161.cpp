#include<stdio.h>

int main(){
	int a[200001]={0};
	int n=0;
	scanf("%d",&n);
	double x=0.0;
	int y=0;
	
	for (int i=0;i<n;i++){
		scanf("%lf %d",&x,&y);
		
		for (int j=1;j<=y;j++){
			int xs=j*x;
			
			if (a[xs]==0){
				a[xs]=1;
				
			}
			else {
				a[xs]=0;
			}
		}
	}
		for(int i=1;i<200001;i++){
		if(a[i]==1){
			printf("%d",i);
			break;
		}
	}
	return 0;	
}
