#include<stdio.h>
int main (){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(d>b){
		printf("%d %d",c-a,d-b);
	} 
	else {
		printf("%d %d",c-a-1,d-b+60);
	}
		return 0;
}
