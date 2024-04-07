#include<stdio.h>
#include<string.h>
#include<math.h>
double distance(double x1,double y1,double x2,double y2){
	double dis = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return dis;
	
}

int main(){
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	scanf("%lf %lf",&x3,&y3);
	double dis1=distance( x1, y1,x2, y2);
	double dis2=distance( x1, y1,x3, y3);
	double dis3=distance( x3, y3,x2, y2);
	printf("%.2lf",dis1+dis2+dis3);
	return 0;
}
