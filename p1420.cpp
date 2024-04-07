#include<stdio.h>
int main (void){
	
	int n=0;
	scanf("%d",&n);
	long long a[n];
	int max=0;
	for (int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	int cnt =1;                                 
	for (int j=0;j<=n-2;j++){
		if (a[j+1]==a[j]+1){
			cnt=cnt+1;
		}
		else {
			if (cnt>max){
				max=cnt;
			}
			cnt=1;
			
		}
		
	}
 if (cnt > max) {
        max = cnt;
    }
	printf("%d\n",max);
	
	
	return 0;
}

