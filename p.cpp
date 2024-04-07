#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct grade {
	char name[10] ;int yu;int shu;int wai;int sum;
	} grade;
		grade a[1000];
int main (){
	int n=0;
	scanf("%d",&n);

	for (int i=0;i<n;i++){
		scanf("%s %d %d %d",&a[i].name,&a[i].yu,&a[i].shu,&a[i].wai);
	a[i].sum=a[i].shu+ a[i].wai+ a[i].yu;
	}
	for(int i=0; i<n-1; ++i){
	for(int j=i+1; j<n; ++j) {
		if (abs(a[i].yu-a[j].yu)<=5&&abs(a[i].shu-a[j].shu)<=5&&abs
		(a[i].wai-a[j].wai)<=5&&abs(a[i].sum-a[j].sum)<=10){
			printf("%s %s",a[i].name,a[j].name);
			printf("\n");	
		}
		
	}	
	
	}

		
	
	return 0;
	
}
