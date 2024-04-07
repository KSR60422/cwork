#include<stdio.h>
int main(){
	int m,t,s;
	scanf("%d %d %d",&m,&t,&s);
if (t==0){
		printf("0");
		
	}
	else {
	int j=s%t;
	if (m-s/t<0){
		printf("0");
	}
	else if (j==0){
		printf("%d",m-s/t);
	}
	else {
		printf("%d",m-s/t-1);
	}
	
	
	
}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

