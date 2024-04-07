 #include <stdio.h>
 #include <math.h>
 #include <stdbool.h>
 bool pd(int x,int y,int n){
 	 if(x < 1 || y < 1 || x > n || y > n) return 0;
    	return 1;
 }
int main()
{
	int ans=0;
	int s[105][105];
	int n=0;int m=0; int k=0;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<100;i++){
		for(int j=1;j<100;j++){
			s[i][j]=0;
		}
	}
	int a=0;int b=0;
	for (int i=1;i<=m;i++){
		scanf("%d %d",&a,&b);
		for(int x = -2; x <= 2; x++)
            for(int y = -2; y <= 2; y++) 
                if((i > m || abs(x) + abs(y) <= 2) && pd(x + a, b + y,n))
                
                   s[x + a][b + y]++;
    }

		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(s[i][j]==0){ans++;}	
	}
	}
	printf("%d",ans);
	return 0;
}
