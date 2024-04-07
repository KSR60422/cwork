#include<stdio.h>
#include<string.h>
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
int main(){
	int n=0;int m=0;int a[20]={0};double b[100]={0.0};int sum=0;
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++){
		sum=0;
		for (int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}		
	insertionSort (a,m);
	for (int k=1;k<m-1;k++){
		 sum=sum+a[k];
		}
		double avg=1.0*sum/(m-2);
			b[i]=avg;
		}
	
double maxResult = b[0]; 
    for (int i = 1; i < n; i++) {
        if (b[i] > maxResult) {
            maxResult = b[i]; 
        }
    }
	printf("%.2lf", maxResult);
	
	
	
return 0;
}
