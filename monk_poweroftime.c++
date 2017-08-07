#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int>q;
	int n,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);	
	for(i=0; i<n; i++)
		scanf("%d",&b[i]);
	for(i=0; i<n; i++){
		q.push(a[i]);		
		}
	int t = 0,j = 0;
	while(! q.empty()){
		if(q.front() == b[j]){
			q.pop();
			t++;
			j++;			
			}
		else{
			q.push(q.front());
			q.pop();
			t++;	
			}		
		}
	printf("%d\n",t);
	}
