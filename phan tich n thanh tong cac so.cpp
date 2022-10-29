#include<stdio.h>
int d = 0;
int t[30] = {};
int  Try(int x[],int i,int n){
	int j;
	if(i==1){
		for(x[1]= 1;x[1]<= n;x[1]++){
			t[1] = x[1];
			Try(x,2,n);
		}
	}
	else{
		if(x[i-1]== n - t[i-2]){
		++d;
		printf("\n%d = %d",n,x[1]);
		
		for(j = 2;j<= i-1;j++)	printf("+%d",x[j]);
	}
	else{
		for(x[i]= x[i-1];x[i]<= n-t[i-1];x[i]++){
			t[i] = t[i-1]+x[i];
			Try(x,i+1,n);
		}
	}
	}
	
}
int main(){
	int n,x[30] = {};
	t[0] = 0;
	scanf("%d",&n);
	Try(x,1,n);
	printf("\nn co %d cach phan tich thanh ",d);
	return 0;
}
