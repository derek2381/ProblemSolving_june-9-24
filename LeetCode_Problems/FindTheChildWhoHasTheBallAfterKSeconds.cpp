// problem link
// https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/description/


class Solution {
public:
    int numberOfChild(int n, int k) {
        vector<int> arr(n);

        for(int i = 0;i < n;i++){
            arr[i] = i;
        }
        int flag = 1;
        int x = 0;
        int val = 0;

        while(k--){
            if(flag == 1){
                x++;
            }else{
                x--;
            }

            val = arr[x];

            if(x == n-1){
                flag = 0;
            }else if(x == 0){
                flag = 1;
            }
        }

        return val;

    }
};
