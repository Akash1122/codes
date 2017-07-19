#include<stdio.h>
int factorial(int m);
int main(){
 	int t;
	scanf("%d",&t);
	while(t--){
		int n,f;
		scanf("%d",&n);
		f = factorial(n);
		printf("%d\n",f);	
	}
 }
int factorial(int m){
	if(m == 1 || m == 0)
		return 1;
	else{
		return m*(factorial(m-1)); 	
	}
	
}
