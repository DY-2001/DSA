class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){

         if(__builtin_popcountl(n) == 1) {
             return true;
         }
        return false;
    }
};
