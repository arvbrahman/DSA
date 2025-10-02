class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0;
        int left = 0;
        while(numBottles + left >= numExchange){
            ans += numBottles;
            int temp = numBottles + left;
            numBottles = int (temp / numExchange);
            left = temp % numExchange;
        }
        return ans+numBottles;
    }
};
