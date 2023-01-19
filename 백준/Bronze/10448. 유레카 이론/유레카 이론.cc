#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, tmp, cnt;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for(int i=1; i<=45; i++){
    	v.push_back(i*(i+1)/2);
	}
	
	while(n--){
		cin >> tmp;
		cnt = 0;
		for(int i=0; i<v.size(); i++){
			for(int j=0; j<v.size(); j++){
				for(int k=0; k<v.size(); k++){
					if(v[i]+v[j]+v[k] == tmp){
						cnt = 1;
						break;
					} 
				}
				if(cnt) break;
			}
			if(cnt) break;
		}
		
		cout << cnt << "\n";
		
	}
	
    return 0;
    
}