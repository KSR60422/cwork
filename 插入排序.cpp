void insert (int a[],int len){
	int temp=0;
	
	for (int i=0;i<len;i++){
		temp=a[i];
		for (int j=i+1;j<len;j++)	{
			if (a[i]>a[j]){
				a[j-1]=a[j];
				a[j]=temp;
				
			}
		}
	}
}
