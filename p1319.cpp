#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int num=0;int i=0;int j=0;int k=0;int s=1;int t=0;
	while (s<=n*n){
		scanf("%d",&k);
			i++;
		
		for (t=k;t>0;t--){
		if (j==n){
			printf("\n");
			j=0;
		}
		if (i%2!=0){
			printf("0");
			j++;
				s++;
		}
		if (i%2==0){
			printf("1");
			j++;
			s++;
		}
			
		}
	}
	
		return 0;
}
