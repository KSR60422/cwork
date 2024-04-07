#include <stdio.h>
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


int main() {
	int n=0;
	scanf("%d",&n);
	int x=0;
	for (int i=2;i<n;i++){
		if (n%i==0 && isPrime(i)){
				x=n/i;
			break;
		
		}
	}
    printf("%d",x);
    return 0;
}
