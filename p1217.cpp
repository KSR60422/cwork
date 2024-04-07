#include<stdio.h>

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
int paranoid(int num){
	int reverse =0;
	int ori=num;
	int r;
	while (num>0){
		 r=num%10;
		reverse=reverse*10+r;
		num/=10;
		 
	}
	if (ori==reverse){
		return 1;
	} else {
		return 0;
	}
}
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if (b>10000000){
		b=10000000;
	}
	for (int i=a;i<=b;i++){
		if (i%2==0 ){
			continue;
		}
		if (isPrime(i)&& paranoid(i)){
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
