#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int add = 0;
        int ans = 0;

        int prev1 = 0;
        int prev2 = 0;

        for(int i = 0;i<n;i++){
            add = nums[i] + prev2;

            ans = max(add,prev1);

            prev2 = prev1;
            prev1 = ans;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3,4};
    cout<<s.rob(arr);
    return 0;
}