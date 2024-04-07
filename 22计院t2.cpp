#include<stdio.h>


int main(void){
	int a[]={4,5,3,4,2};
	int length=sizeof(a)/sizeof(int);
	int temp=0;
	printf("%d\n",a[0]);
	for (int i=1;i<length;i++){
	
		temp=a[i];
	for (int j=i-1;j>=0 && a[j]>a[j+1];j--){
		a[j+1]=a[j];
		a[j]=temp;
	}
    
	for (int x=0;x<=i;x++){
		printf("%d ",a[x]);	
    
	
	}

	printf("\n");
	}


return 0;
}
