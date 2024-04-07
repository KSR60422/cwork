#include<stdio.h>
#include<string.h>
typedef struct member{
	char name [100];int old ;int pgrade;
}member;
member a[5];
void progress (int * n){
	 *n=*n*1.2;
	 if (*n>=600){
	 	*n=600;
	 }
 }
int main (){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",&a[i].name,&a[i].old,&a[i].pgrade);
		progress(&a[i].pgrade);
	}
	
		for(int i=0;i<n;i++){
		printf("%s %d %d\n",a[i].name,a[i].old+1,a[i].pgrade);
		
	}
	
	
return 0;
}
