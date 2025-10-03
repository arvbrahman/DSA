class Solution {
public:

    int trap(vector<int>& height) {
        int res = 0;

        int n = height.size();
        int left = height[0];
        vector<int> right(n);
        right[n-1] = height[n-1];

        for(int i= n-2; i>=0; i--){
            right[i] = max(right[i+1],height[i]);
        }

        for(int i =1;i < n; i++){
            left= max(left, height[i]);
            res += min(left, right[i]) - height[i];
        }
        return res;
    }
};
