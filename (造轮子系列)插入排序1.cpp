#include<stdio.h>
void insert(int a[] )
{
	int length=sizeof(a)/sizeof(int);
	int temp=0;

	for (int i=1;i<length;i++){
		temp=a[i];
	for (int j=i-1;j>=0 && a[j]>a[j+1];j--){
		a[j+1]=a[j];
		a[j]=temp;
	}
    
}
}
int main(void){
	int a[]={97,98,99,100,1};
	int length=sizeof(a)/sizeof(int);
	int temp=0;
	int cnt=0;
	for (int i=1;i<length;i++){
		temp=a[i];
	for (int j=i-1;j>=0 && a[j]>a[j+1];j--){
		a[j+1]=a[j];
		a[j]=temp;
	}
    	cnt++;
	for (int x=0;x<=cnt;x++){
		printf("%d ",a[x]);	
    	}
printf("\n");
	}
return 0;
}

	void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

