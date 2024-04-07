#include<stdio.h>
int main(){
	int x,n;
	scanf("%d %d",&x,&n);
	
	int s2;
	if (n%7==0)
	{
		s2=n/7*1250;
	}
	else {if (n% 7!=6){
		s2=n/7*1250+(n%7)*250;
	}
	else {s2=n/7*1250+1250; 
	}
	}
	
	printf("%d",s2);
	
	
	return 0;
}
