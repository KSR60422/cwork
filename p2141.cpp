#include<stdio.h>
int main(){
	int n=0;
	int ans=0;
	scanf("%d",&n);
	int a[110]={0};
	int b[110]={0};
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			for (int k=0;k<n;k++){
				if (k!=i&&k!=j&&a[i]+a[j]==a[k]&&b[k]==0){
					ans++;
					b[k]=1;
				}
			}
		}
	}
	printf("%d",ans);
		
	return 0;
	
}
