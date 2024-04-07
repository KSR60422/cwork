#include<stdio.h>

int isprime (int n)
{
	if (n<2){
		return 0;
	}
	 for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;}
        }
         return 1;
    }
     
       
			

int main (void){
	int l;
	scanf("%d",&l);
int sum=0;
int a[100000];
int cnt=0;
	if (l==1){
		printf("0\n");
	}
	if (l==2){
		printf("2\n");
		printf("1\n");
	}
	
	if (l!=1 && l !=2){	
	for (int i=2;sum<=l;i++){
		if (isprime(i)){
			a[cnt++]=i;
			sum+=i;
		}
	}
	for (int j=0;j<=cnt-2;j++){
		printf("%d\n",a[j]);
	}
printf("%d\n",cnt-1);
	}
	return 0;
	}
	
