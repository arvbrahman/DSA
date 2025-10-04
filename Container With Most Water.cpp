class Solution {
public:
    int maxArea(vector<int>& height) {
        int area =0;
        int n = height.size();
        int i =0, j = n-1;

        while(i<j){
            int base = j-i;
            int length = min(height[i],height[j]);
            int newArea = base * length;
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
