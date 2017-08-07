#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int a[100001] = {0};
    int i = 0;
    stack<char>p;
    int c = 0;
 
    while(s[i] != '\0'){

       if(p.empty() || p.top() == s[i]){
           p.push(s[i]);
           c++;
           a[c * (s[i] -'a' + 1)] = 1;
           i++;
       }
       else{
	 while(!p.empty() && p.top() != s[i]){
             p.pop();
             c--;
          }
         /*if(p.top() == s[i]){
             p.push(s[i]);
             c++;
             a[c * (s[i] -'a' + 1)] = 1;
             i++;
         }*/
	}
    }
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        if(a[x] == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        // your code goes here
    }
    
    return 0;
}

