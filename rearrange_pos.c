#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);		
		}	
	int b[n],j=0;
	for(i=0; i<n; i++){
		if(a[i] < 0){
			b[j] = a[i];
			j++;			
			}	
		}
	for(i=0; i<n; i++){
		if(a[i] >= 0){
			b[j] = a[i];
			j++;			
			}
		}
	for(i=0; i<j; i++)
		printf("%d\n",b[i]);
	}
