class Solution {
public:
    int maxArea(vector<int>& height) {
        int area =0;
        int n = height.size();
        int i =0, j = n-1;

        while(i<j){
            int newArea = min(height[i],height[j]) * (j-i);
            area = max(area,newArea);

            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        return area;
    }
};
