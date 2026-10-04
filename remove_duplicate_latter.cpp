#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int count[26] = {0};

        for(char ch : s){
            count[ch - 'a']++;
        }
        string ans = "";
        bool used[26] = {false};

        for(char ch : s){
            count[ch - 'a']--;
            
            if(used[ch - 'a']){
                continue;
            }

            while(!ans.empty() && ans.back() > ch && count[ans.back() - 'a'] > 0){
                 used[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(ch);
            used[ch - 'a'] = true;
        return ans;
            }
    }
};


