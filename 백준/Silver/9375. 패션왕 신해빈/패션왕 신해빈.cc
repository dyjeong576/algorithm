#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map <string, int> tmp;
	vector<int> answer;
	int num, count, sum;
	string item, type;
	
	cin >> num;
	
	for(int i=0; i<num; i++){
		tmp.clear();
		sum = 1;
		cin >> count;
		while(count){
			cin >> item >> type;
			tmp[type]++;
			count--;
		}
		for(auto it : tmp){
			sum *= it.second + 1;
		}
		answer.push_back(--sum);
	}
	
	for(auto i : answer){
		cout << i << endl;
	}
	
    return 0;
    
}
