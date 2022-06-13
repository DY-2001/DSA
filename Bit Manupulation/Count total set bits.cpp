class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n) {
        if(n == 0) {
            return 0;
        }
        int last_pow = (((int)log2(n)) * (pow(2, (int)log2(n)) / 2)) + n + 1 - (pow(2, (int)log2(n))) + countSetBits(n - pow(2, (int)log2(n)));
        return last_pow;
    }
};
