#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
	char way[20];
	char ans[101];
	int n=0;
	int x;
	char k;
	int a=0;int b=0;
int main (){

	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%s",&way);
		if (isalpha(way[0])){
		 k=way[0];
			scanf("%d %d",&x,&b);
		}
		 else {
			x=atoi(way);
			scanf("%d",&b);
			
		}
		if(k=='a'){
			sprintf(ans,"%d+%d=%d\n",x,b,x+b);
		}
			
			
		else if(k=='b')
		{
			sprintf(ans,"%d-%d=%d\n",x,b,x-b);
		}
			
		else{
			sprintf(ans,"%d*%d=%d\n",x,b,x*b);
		}
			
			 printf("%s%d\n",ans,strlen(ans)-1);
	}
	return 0;
}
