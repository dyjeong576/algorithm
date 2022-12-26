#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>


using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, set<string>> userlog;
    vector<int> result(id_list.size(),0);
    int blank, idx, cnt;
    string to, from;
    
    for(string s : report){
        blank = s.find(" ");
        from = s.substr(0,blank);
        to = s.substr(blank+1);
        if(userlog[from].find(to) == userlog[from].end()){
            userlog[from].insert(to);
            idx = find(id_list.begin(), id_list.end(), to) - id_list.begin();
            result[idx]++;
        }
    }
    
    for(int i=0; i<id_list.size(); i++){
        cnt = 0; 
        for(string s : userlog[id_list[i]]){
            idx = find(id_list.begin(), id_list.end(), s) - id_list.begin();
            if(result[idx] >= k) cnt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
    
}