#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 0;
	bool flag = false;
	vector<int> n(9);
	
	for(int i=0; i<9; i++){
		cin >> n[i];
		sum += n[i];
	}
	
	sort(n.begin(), n.end());
	
	for(int i=0; i<8; i++){
		for(int j= i+1; j<9; j++){
			if(n[i] + n[j] == sum - 100){
				n[i] = 0;
				n[j] = 0;
				flag = true; 
				break;
			}
		}
		if(flag) break;
	}
	for(int i = 0; i<9; i++){
		if(n[i] != 0)cout << n[i] << "\n";
	}
	
	return 0;
    
}