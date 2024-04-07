#include<stdio.h>
int main (void){
	int sumofqi=1;
	int sumofou=0;
	for (int i=2;i<=100;i++){
		if (i%2==0){
			sumofou+=i;
		}
		else {
				sumofqi+=i;
		}
	}
	
	printf("%d\n",sumofqi);
	printf	("%d\n",sumofou);
	return 0;
}

