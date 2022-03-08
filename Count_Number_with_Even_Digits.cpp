class Solution {
public:
    int countEven(int num) {
        return num-(num/10&1 ^ num/100&1 ^ num/1000 )>>1;
    }
};