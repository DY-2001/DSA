//Kadane's Algorithm


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long curr = 0, max_till_now = INT_MIN;
        for(int i = 0; i < n; i++) {
            curr += arr[i];
            max_till_now = max(curr, max_till_now);
            if(curr < 0) {
                curr = 0;
            }
        }
        
        return max_till_now;
    }
};
