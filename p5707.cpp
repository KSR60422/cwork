#include<stdio.h>
int main(){
	int s;
	int v;
	scanf("%d %d",&s,&v);
	int t1;
	int t2;
	if (s%v !=0){
	
	 t1=s/v+1;
	 t2=10;}
	else {
	t1=s/v;
	 t2=10;}
	
	
	if (t1+t2 > 480){
	int d=(24*60-t1-t2);
	int d1=d/60;
	int d2=d%60;
		
		if (d1>=2 && d2>=10){
			printf("%d:%d",8+d1,d2);
		}
		else if(d1>=2 && d2<10){
			printf("%d:0%d",8+d1,d2);
		}
		else if (d1<2 && d2>=10){ 
		printf("0%d:%d",8+d1,d2);
		}
		else if (d1<2 && d2<10){
			printf("0%d:0%d",8+d1,d2);
		}
	}
	else  {
			int d=(8*60-t1-t2);
	int d1=d/60;
	int d2=d%60;
	if (d2>=10){
		printf("0%d:%d",d1,d2);
	}
		
		else {printf("0%d:0%d",d1,d2);
		}
	}
	
	return 0;
}



