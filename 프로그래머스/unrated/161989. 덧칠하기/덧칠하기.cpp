#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int i=0, x=1;
    
    while(i < section.size()){
        x = section[i] + m - 1; //5
        answer++;
        while(section[i] <= x){
            i++;
            if(i == section.size()) break;
        }
    }
    
    return answer;
}