#include<stdio.h>

void rotate(int a[],int k,int n){
	int i,j;
	int b[n];	
	for(i=0; i<n; i++){
		if(a[i] == k)
			break;			
		}
	i = i+1;
	for(j=0; j<n; j++){
		b[j] = a[i];
		i++;
		if(i == n)
			i = 0;	
		}
	for(j=0; j<n; j++){	
		printf("%d\n",b[j]);
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		}
	rotate(a,k,n);
	}
