#include<iostream>

using namespace std;


class Solution {
public:
    int countDigitOne(int n){
        long long ans = 0;
        
        for(long long i = 0;i<n;i++){
            long long divider = i * 10;

            ans += (n/divider) * i;

            long long rem = n % divider;

            if(rem >= i){
                ans += min(rem - i+1,i);
            }
        }
        return ans;
    }
};

