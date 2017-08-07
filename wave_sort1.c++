#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {11, 25, 10 , 8, 50, 111};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	int i;
	int temp;
	for(i=0; i<n; i = i + 2 ){
		temp = a[i];
		a[i] = a[i+1];
		a[i+1]	= temp;
		}
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	
	}
