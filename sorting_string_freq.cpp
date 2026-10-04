#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();

        int freq[128] = {0};

        for(int i = 0;i<n;i++){
            freq[s[i]]++;
        }
        string ans = "";
        for(int count = n;count >= 1;count--){

            for(int i = 0;i<128;i++){
                if(freq[i] == count){

                    for(int j = 0;j<count;j++){
                        ans += char(i);
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;

    cout<<s.frequencySort("aryan")<<endl;
    return 0;
}