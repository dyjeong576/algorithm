#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;
map<int, int> m, m_first;
int num, tmp, x;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first){
		return m_first[a.second] < m_first[b.second];
	}
	
	return a.first > b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> num >> x;
    
    for(int i = 0; i<num; i++){
    	cin >> x;
    	m[x]++;
    	if(m_first[x] == 0) m_first[x] = i+1;
	}
    
    for(auto it : m){
    	v.push_back({it.second, it.first});
	}
	
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		for(int i = 0; i<it.first; i++){
			cout << it.second << " ";
		}
	}
	
	return 0;
	
}