#include<stdio.h>
#include<string.h>
typedef struct record {
	int code;int grade;int ext;int sum;int aov;
}record;
int main (){
	int n=0;
	scanf("%d",&n);
	record a[1000];
	for (int i=0;i<n;i++){
		scanf("%d %d %d",&a[i].code,&a[i].grade,&a[i].ext);
		a[i].sum=7*a[i].grade+3*a[i].ext;
		a[i].aov=a[i].grade+a[i].ext;
		
	}
	for (int i=0;i<n;i++){
			if (   a[i].sum>=800&&       a[i].aov>140        ){
			printf("Excellent\n");
			
		}
		else {
			printf("Not excellent\n");
		}
	
		}

	return 0;
	
}
