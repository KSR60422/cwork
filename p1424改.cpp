#include <stdio.h>
int main (){
	long long  x,n,s;
	s=0;
	scanf("%d %d",&x,&n);
	for (int i=0;i<n;i++){
		if (x!=6 &&x!=7){
			s+=250;
		}
		if (x==7){
			x=1;
		
		}
			else x++;
	}
	
	printf("%d",s);
	
return 0;
}
