class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        
        sort(strs.begin(), strs.end());
        string smallest = strs[0];
        string biggest = strs[strs.size()-1];
        string answer = "";
        
        for(int i = 0; i < biggest.size(); i++) {
            if(smallest[i] == biggest[i]) answer += smallest[i];
            else break;
        }
        return answer;
    }
};