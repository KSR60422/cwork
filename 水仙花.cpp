#include <stdio.h>
#include<math.h>
int main()
{	
	int n=0;
	scanf	("%d",&n);
	int v=n;
	
	int a=1,b;
	while (v>1)
	{
		v--;
		a*=10;
		//printf("%d   %d\n",v,a);
	}
	b=a*10-1;
	int i=a;
	
	while(i<=b){
		
		int t=i;
		int sum=0;
		while (t>0){
	
		int d = t%10;
		t/=10;
		int p = pow(d,n);
		sum+=p;
	}
		
		
		if  (i==sum) {
			printf("%d\n",i);
		}
		i++;
	}
	
	
	
		
		
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		return 0;	
		
}
