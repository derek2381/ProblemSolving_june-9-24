// problem link
// https://leetcode.com/problems/find-the-n-th-value-after-k-seconds/description/

class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> even(n, 1), odd(n);
        int mod = 1e9+7;

        for(int i = 1;i <= k;i++){
            long long int sum = 0;
            for(int j = 0;j < n;j++){
                if(i%2 == 1){
                    sum = ((sum%mod) + (even[j]%mod))%mod;
                    odd[j] = sum;
                }else{
                    sum = ((sum%mod)+ (odd[j]%mod))%mod;
                    even[j] = sum;
                }
            }
        }

        if(k%2 == 1){
            return odd[n-1];
        }else{
            return even[n-1];
        }
    }
};
