#include<stdio.h>
int main(void){
	int money=0;
	int end=0;
	int n=0;
	int cost=0; 
	int bl=1;
	for (int i=1;i<=12;i++){
		money=money+300;
		scanf("%d",&cost);
		money=money-cost;
		if(money<0){
			bl=0;
			end=i;
			break;
		}
		n=n+money/100;
		money=money%100;
	}
	if (bl==1)
{
	money=money+n*120;
	printf("%d",money);
}
	else 	{
		printf("-%d",end);
	}
	
	
	
	return 0;
}
