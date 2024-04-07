#include<stdio.h>
#include<string.h>
int main (){
	int n=0;
	scanf("%d",&n);int ans=1;
	for (int i=n;i>1;i--){
		ans=(1+ans)*2;
	}
	
	printf("%d",ans);
	return 0;
}
