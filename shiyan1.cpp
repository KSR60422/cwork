#include <stdio.h>

int main()
{
	int mask=1;
	int x;
	scanf("%d",&x);
	
	int t=x;
  while (t>9) {
		
		t=t/10;
		mask=mask*10;
	}	
  
  do{
  	int d= x/mask;
  	
  	printf("%d",d);
  	
  	if (mask>9 ){printf(" ");
	  
	  }
  	 
  	x =x%mask;
  	
  	mask=mask/10;
  }while ( mask>0);
    
    
    
    
    
    
    
    printf("\n");
    
	return 0;	
		
}



