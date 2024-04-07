#include<stdio.h>
#include<string.h>
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
int main(){
	int n=0;
	scanf("%d",&n);
	int a[100]={0};
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for (int i=0;i<n;i++){
	 if (isPrime(a[i])){
	 	printf("%d ",a[i]);
	 }
	}
	
		return 0;
}
