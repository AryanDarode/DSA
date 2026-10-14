#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        int mul = 1;

        for(int i = 0;i<n;i++){
            mul = mul*nums[i];
            ans = max(mul,ans);
            if(mul == 0){
                mul = 1;
            }
        }
        mul = 1;

        for(int i = n-1;i>=0;i--){
            mul = mul*nums[i];
            ans = max(mul,ans);
            if(mul == 0){
                mul = 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> Arr = {1,2,-3};
    cout<<s.maxProduct(Arr);
    return 0;
}