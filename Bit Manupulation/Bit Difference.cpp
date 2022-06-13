class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int x = a ^ b;
        return __builtin_popcount(x);
        
    }
};
