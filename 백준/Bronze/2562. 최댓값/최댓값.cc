#include <iostream>

using namespace std;

int main()
{
	int num, max = 0, id;
	
	for(int i = 0; i<9; i++){
		cin >> num;
		if(max < num) {
			max = num;
			id =i+1;
		}
	}
	
	cout << max << endl << id;
    
}