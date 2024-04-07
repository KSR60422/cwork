#include<stdio.h>
int main (void){
	int n=0;
	scanf("%d",&n);
	int k=1;
	int a=1;
	int cnt=1;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(k<10){
				printf("0%d",k++);
			}
			else{
				printf("%d",k++);
			}
		}
		printf("\n");
	}
	printf("\n");
	for (int t=1;t<=n;t++){
		for (int b=1;b<=n;b++){
			if (n-cnt>=b){
				printf("  ");
			}
			 
			else{
					if(a<10){
						printf("0%d",a++);
					}
					else{
						printf("%d",a++);
					}
				
			}	
		}
		
		
		
		cnt++;
		
		printf("\n");
	}
	
	
	return 0;
}
