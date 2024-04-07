#include<stdio.h>
int main(void){
	int n=0;
	scanf("%d",&n);
	int nw=n/52;
	int x=100;
	int k=1;
	int cr=7*x+21*k;
	for (k=1;;k++){
		for (x=100;x>=1;x--){
			cr=7*x+21*k;
			if (cr==nw){	break;}
	}
		if (cr==nw){	break;	}
		
	}
	printf("%d\n",x);
		printf("%d\n",k);
	

	return 0;
}
