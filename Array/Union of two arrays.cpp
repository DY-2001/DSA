class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i = 0; i < m + n; i++) {
            if(i < n) {
                s.insert(a[i]);
            }
            else {
                s.insert(b[i - n]);
            }
        }
        return s.size();
    }
};
