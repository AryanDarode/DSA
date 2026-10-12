#include<iostream>
#include<unordered_map>

#include<vector>
#include<algorithm>

using namespace std;

class Solution{
    public:
    int longestPalindrome(string s){
        int n = s.size();
        unordered_map<char,int> mp;

        int ans = 0;
        for(int i= 0;i<n;i++){
            mp[s[i]]++;
        }

        bool odd = false;

        for(auto it : mp){
            if(it.second % 2 == 0){
                ans += it.second;
            }
            else{
                ans += it.second - 1;
                odd = true;
            }
        }
        if(odd){
            ans++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.longestPalindrome("Aryan");
    return 0;

}
