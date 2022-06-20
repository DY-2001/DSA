class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        
        long long min = LLONG_MAX;
        
        if(n == m) {
            min = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
        }
        else {
            for(long long i = 0; i < n - m + 1; i++) {
                if(a[i + m - 1] - a[i] <= min) {
                    min = a[i + m - 1] - a[i];
                }
            }
        }
        return min;
    }   
};
