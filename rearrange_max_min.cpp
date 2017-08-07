#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,type,f,i,q,ind;
    cin >>n;
    int a[n];
    map<int,int>m,first_map;
    pair<int,int>current_max;
    vector<pair<int,int> >Max;
    vector<pair<int,int> >v;

    for(i = 0;i < n;i++){
        cin >> a[i];
        m[a[i]]++;
	}
    
    for(i = 0;i < n;i++){
    	
        if(m[a[i]] > 0){
        	if(first_map[m[a[i]]] == 0)
        		first_map[m[a[i]]] = a[i];
            v.push_back(make_pair(m[a[i]],a[i]));
            m[a[i]] = 0;
        }
    }
    
    current_max.first = 0;
    //cout << v.size() << "size" << endl;
    for(i = 0;i < v.size();i++){
        if(current_max.first < v[i].first){
            current_max = v[i];
            
        }
        Max.push_back(current_max);
      //  cout << "Max " << Max[i].first << " " << Max[i].second << endl;
    }
    cin >> q;
    while(q--){
        cin >> type;
        if(type == 0){
        //    cout << "yes" << endl;
            cin >> f;
            ind = lower_bound(Max.begin(),Max.end(),make_pair(f,0)) - Max.begin();
            if(ind >= Max.size())
                cout << 0 << endl;
            else{
                cout << Max[ind].second << endl;
            }
        }
        else{

            cin >> f;
            
            cout << first_map[f] << endl;
            
        }
    }
    
    return 0;
}
