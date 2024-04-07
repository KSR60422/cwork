#include<stdio.h>
#include<string.h>
int main(){
	char a[9];
	char b[9];
	scanf("%s",&a);
	scanf("%s",&b);
	int n=strlen(a);
	int m=strlen(b);
	int ans1=1;
	int ans2=1;
	for(int i=0;i<n;i++){
	ans1*=a[i]-64;
	}
	for(int i=0;i<m;i++){
		ans2*=b[i]-64;
	}
	if(ans1 % 47==ans2 % 47) {
		printf("GO");
	}
	else {
		printf("STAY");
	}
	return 0;
}
