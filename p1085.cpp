#include<stdio.h>
int main(){
	int a,b,s,t;
	s=0;
	t=1;
	int i;
	
	for (t=1;t<8;t++){
		scanf("%d %d",&a,&b);
		if (a+b>s){
			s=a+b;
			i=t;
		}
		
	}
	if (s<=8){
		printf("0");
	}
	else
		printf("%d",i);
	
	return 0;
}
