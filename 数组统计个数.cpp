#include<stdio.h>
int main ()
{
	//����˵�˾�ֻ���㵽�� 
 	int x;
 	scanf("%d",&x);
 	int count [10];
 	int i;
 	
 	for (i=0;i<10;i++){
 		count[i]=0;
	 }
 	
 	while (x!=-1) {
 		if ( x>=0 && x<=9 )
 		{ count [x]++;
 			
		 }
 		scanf ("%d",&x);
 		
	 }
	for ( i=0;i<10;i++){
		printf ("%d:%d\n",i,count[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		return 0;
 } 
