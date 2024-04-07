#include<stdio.h>
int main(){
	int n=0;
	int x=0;
	scanf("%d %d",&n,&x);
	int s=0;
	for (int i=1;i<=n;i++){
		int num=i;
		while (num>0){
			if (num % 10 ==x){
				s++;
			}
			num=num/10;
		}
	}
	
	 printf("%d",s);
	
return 0;
}
