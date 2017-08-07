#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,j,temp;
	scanf("%d %d",&n,&k);
	int a[n],i;	
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(abs(a[i] - k) > abs(a[j] - k)){
				temp = a[i];
				a[i] = a[j];				
				a[j] = temp;	
				}		
			}	
		}	
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);		
		}	
	
	}
