#include<stdio.h>
void insert (int a[],int len){
	int temp=0;
	int j=0;
	
	for (int i=1;i<len;i++){
		temp=a[i];
		for ( j=i-1;j>=0 && temp <a[j];j-- )	{
		
				a[j+1]=a[j];
				a[j]=temp; 
				}
			
	}
}
int main (){
	int a[10]={8,56,25,478,56,12,45,89,5,6};
	insert(a,10);
	for(int i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
} 
