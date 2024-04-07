#include<stdio.h>
#include<string.h>
int run(int x){
	int ret=0;
	if (x%100==0){
		if (x%400==0){
			ret=1;
		}
		
	}
	else if (x%4==0){
		ret=1;
	}
	return ret;
}
int main(){
	int x=0;
	int y=0;
	int s=0;
	int a[2000];
	
	scanf("%d %d",&x,&y);
	for (int i=x;i<=y;i++){
		 if (run(i)){
		 	a[s]=i;
		 	s++;
		 	
		 }
	}
	printf("%d\n",s);
	if (s>0){
		for(int i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	}
	
	
	return 0;
}

