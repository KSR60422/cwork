#include<stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d",&x);
		double w=3.141593*4.0/3.0*1064;
		double e=pow(w,1.0/3);
		int u=(int)e;
	switch (x){
		case 1:
			printf("I love Luogu!");
			break;
		case 2:
			printf("6 4");
			break;
		case 3:
			printf("3\n");
			printf("12\n");
			printf("2\n");
			break;
		case 4:
			printf("166.667");
			break;
		case 5:
			printf("15");
			break;	
		case 6:
			printf("%lf",sqrt(117));
			break;
		case 7:
			printf(	"110\n"
					"90\n"
					"0\n"
			);
			break;
		case 8:
			printf("%lf\n",3.141593*2*5);
			printf("%lf\n",3.141593*5*5);
			printf(		"%lf\n",3.141593*5*5*5*4/3
			);
			break;
			
		case 9:
			printf("22");
			break;
		case 10:
			printf("9");
			break;
		case 11:
			printf("%lf",100.0/3);
			break;	
		case 12:
			printf("%d\n",13);
			printf("R\n");
			break;
		case 13:
		
			printf("%d",u);
			break;
		case 14:
			printf("50");
			break;
	}
	return 0;
}
