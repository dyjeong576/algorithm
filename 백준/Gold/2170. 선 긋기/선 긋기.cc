#include <bits/stdc++.h>
using namespace std;

pair<int, int> p[1000004];
int n, l, r, ret; 

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL); 
    cin >> n; 
    for(int i = 0; i < n; i++){ 
        cin >> l >> r;
        p[i] = {l, r};
    }
    sort(p, p + n); 
    l = p[0].first; r = p[0].second; 
    for(int i = 1; i < n; i++){ 
        if(r < p[i].first){ 
            ret += (r - l); 
            l = p[i].first;	r = p[i].second;
        }else if(p[i].first <= r && p[i].second >= r) r = p[i].second;
    }
    ret += r - l;
    
    cout << ret << endl;
    
	return 0;
    
}