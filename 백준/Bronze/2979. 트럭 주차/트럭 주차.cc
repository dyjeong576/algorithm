#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int price[3], a, b, sum = 0;
	int n[100] = {0};
	
	for(int i = 0; i<3; i++){
		cin >> price[i];
	}
	for(int i=0; i<3; i++){
		cin >> a >> b;
		for(int j = a; j<b; j++){
			n[j]++;
		}
	}
	
	for(int x : n){
		if(x == 1) sum += price[0];
		if(x == 2) sum += x*price[1];
		if(x == 3) sum += x*price[2];
	}
	
	cout << sum;
	
	return 0;
	
}