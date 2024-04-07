#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max;
	int mid;
	int min;
	if (a>=b  && b>=c){
		max=a;
		mid=b;
		min=c;
	}
	if ( a>=c && c>=b){
		max=a;
		mid=c;
		min=b;
	}
	if (b>=a && a>=c ){
		max=b;
		mid=a;
		min=c;
	}
		if (b>=c && c>=a){
		max=b;
		mid=c;
		min=a;
	}
		if (c>=b && b>=a){
		max=c;
		mid=b;
		min=a;
	}
		if (c>=a && a>=b){
		max=c;
		mid=a;
		min=b;
	}
if (min+mid <=max ){
		printf("Not triangle");
	}
else {
if (min*min+mid*mid==max*max )
{
	printf("Right triangle\n");
	
}
	
	else if(mid*mid +min *min > max*max ){
		printf("Acute triangle\n");
	}

else if(mid*mid +min *min < max*max ){
	printf("Obtuse triangle\n");
}
if (a==b ||  a==c || c==b  ){
	printf("Isosceles triangle\n");
}

if(a==b && b==c )
{
	printf("Equilateral triangle");
}



}

	
return 0;
}
