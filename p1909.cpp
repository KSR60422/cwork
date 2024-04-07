#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	int a2,b2;
	scanf("%d %d",&a2,&b2);
	int a3,b3;
	scanf("%d %d",&a3,&b3);
	int s1,s2,s3;
	
	if (n%a1==0){
		s1=b1*n/a1;
	}
	else {
		s1=b1*(n/a1+1);
	}

	if (n%a2==0){
		s2=b2*n/a2;
	}
	else {
		s2=b2*(n/a2+1);
	}

	
	
	if (n%a3==0){
		s3=b3*n/a3;
	}
	else {
		s3=b3*(n/a3+1);
	}
	
	if (s1<s2 && s1<s3){
		printf("%d",s1);
	}

	
	if (s2<s1 && s2<s3){
		printf("%d",s2);
	}

	
	
	
	if (s3<s1 && s3<s2){
		printf("%d",s3);
	}

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
