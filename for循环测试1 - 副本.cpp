#include<stdio.h>
int main(){
	int i=0;
	for (i=0;i<10;i++){
		printf("%d",i);
		if( i == 5){
			break;
		}
	}
	printf("%d",i);
		return 0;
}
