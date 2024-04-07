#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=5*n;
	int b=11+3*n;
	if (a<b){
		printf ("Local");
	}
	else {printf ("Luogu");
	}
	return 0;
}
