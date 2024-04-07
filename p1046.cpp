#include <stdio.h>
int main (){
	int a[10];
a[0]=0;
	for (int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	int h=0;
	scanf("%d",&h);
	int ht=h+30;
	int s=0;
	for (int t=0;t<=9;t++){
	if (ht>=a[t]){
		s+=1;
	}
	}
	printf ("%d",s);
	
	return 0;
}
