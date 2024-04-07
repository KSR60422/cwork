#include<stdio.h>
int main(void){
	int n=0;
	scanf("%d",&n);
	int key[7]={0};
	int num[7]={0};
	int ans[7]={0};
	int cnt=0;
	for (int i=0;i<7;i++){
		scanf("%d",&key[i]); 
	}
	for (int i=1;i<=n;i++){
		cnt=0;
		for (int j=0;j<7;j++){
				scanf("%d",&num[j]); 
				for (int k=0;k<7;k++) {
					if (num[j]==key[k]){
						cnt++;
					}
				}
		}
		if(cnt>0){
			ans[7-cnt]=ans[7-cnt]+1;
		}
		
	}	
	for (int i=0;i<7;i++)	
		{
			printf("%d ",ans[i]);
		}
		return 0;
}
