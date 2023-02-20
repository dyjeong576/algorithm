#include <bits/stdc++.h>

using namespace std;


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m, result = 0;
    
    cin >> n >> m;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
    	cin >> v[i];
	}
	
	for(int i=0; i<n-2; i++){
		for(int  j=i+1; j<n-1; j++){
			for(int k= j+1; k<n; k++){
				if(v[i] + v[j] + v[k] <= m) result = max(v[i] + v[j] + v[k], result);
			}
		}
	}
	
	cout << result << endl;
    

    return 0;
    
}