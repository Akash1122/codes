#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	scanf("%s",s);
	int a[150] = {0};
	int i =0;
	while(s[i] != '\0'){
		a[s[i]]++;
		i++;
	}
	int j = 'a';
	int c = 0;
	while('a' <= j && j <= 'z'){
		if(a[j] > 0){
			printf("%c\n",(char)j);
			c++;
		}
		j++;
	}
	for(i=0; i<c; i++){
		for(j=i+1; j<c; j++){
			
		}
	}
	// your code goes here
	return 0;
}
