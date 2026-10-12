#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());
        int n = nums.size();

        int ans = 1;
        int count = 1;
        for(int i = 1;i<n;i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                count  = 1;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> Arr = {4,2,7,2,3};

    cout<<s.longestConsecutive(Arr);
    return 0;
}