#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	multimap<int,int>m;
	multimap<int,int>::iterator it;
	m[1] = 2;
	m[2] = 3;

	for(it = m.begin();it != m.end();it++)
		cout << *it.first << " " << *it.second << endl;
}
