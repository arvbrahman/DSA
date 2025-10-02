class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0;
        int left = 0;
        while(numBottles + left >= numExchange){
            ans += numBottles;
            int temp = numBottles + left;
            left = temp - numExchange;
            numBottles =1;
            numExchange++;
        }
        return ans + numBottles;
    }
};
