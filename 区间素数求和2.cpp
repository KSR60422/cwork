#include<stdio.h>
int main()
{
	int m,n,i;
	int cnt=0,sum=0;
	
	scanf ("%d %d",&m,&n);
	
	for (i=m;i<=n;i++) {
		int t=1;
	int k;
		for( k=2;k<i-1;k++){
			if (i%k==0){
				t=0;
				break;
			}
		}
		
		
		if (t){
			cnt++;
			sum+=i;
		}
	}
	
	printf("%d %d",cnt ,sum);
	
	
	
	
	
	
	
	
	
	
	
	
	 
 return 0;
 } 
