#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int t=n;
	int r=n;
	int u=1;
for (r=n;r>0;r--)
{
		for (t=n;t>0;t--){
		if (u<10){
			printf("0%d",u);
		}
		if (u>=10){
			printf("%d",u);
		}
		
		u++;
	}
	printf("\n");
	n=n-1;
}


	return 0;
}
