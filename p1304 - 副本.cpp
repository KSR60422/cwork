#include<stdio.h>
#include<string.h>//这个数学原理很有意思，i+（n-i）==n ； 
int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void num(int x){
	printf("%d=",x);
	for (int i=3;i<x;i++){
		if (isPrime(i) && isPrime(x-i)){
			printf("%d+%d\n",i,x-i); break;
		}
	}
	
}
int main (){
	int n=0;
	scanf("%d",&n);
	printf("4=2+2\n");
	if (n>4){
		
		
		for(int i=6;i<=n;i+=2)
    {
        num(i);
        }
	}
	return 0;
}
