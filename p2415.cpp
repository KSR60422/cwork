#include<stdio.h>
#include<string.h>
#include<math.h>
	 int a[31];int i=0;int j=0;
	 long long sum=0;
int main (){
	//�����м����⣬������ȫ����
	//�޺���֮�а�
	 while (scanf("%d",&a[i++])!=EOF);
	 {
	 	for(j=0;j<i;j++){
        sum+=a[j];
    }
	 }
	 
	sum*=pow(2,i-2);
	printf("%lld",sum);
	
	
	return 0;
}
