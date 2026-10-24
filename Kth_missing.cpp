#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int m = arr[n-1];

        int j = 0;
        vector<int> ans;

        for(int i = 0 ;i<n;i++){
            if(j < n && arr[i] == i){
                j++;
                continue;
            }

            ans.push_back(i);
        }
        return ans[k-1];
    }
};

int main(){
    Solution s;

    vector<int> arr = {3,4,5,51,5,21};
    int k = 5;

    cout<<s.findKthPositive(arr,k);
    return 0;
}