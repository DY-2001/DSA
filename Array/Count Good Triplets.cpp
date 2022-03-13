//LeetCode

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        long long int count = 0;
        for(long long int i = 0; i < arr.size(); i++) {
            for(long long int j = i + 1; j < arr.size(); j++) {
                for(long long int k = j + 1; k < arr.size(); k++) {
                    if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        count++;
                }
            }    
        }
        return count;
    }
};
