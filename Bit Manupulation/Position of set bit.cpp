class Solution {
  public:
    int findPosition(int N) {
        if(__builtin_popcount(N) == 1) {
            return __builtin_ctz(N) + 1;
        }
        else {
            return -1;
        }
    }
};
