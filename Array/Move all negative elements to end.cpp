class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> vp;
        vector<int> vn;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) {
                vp.push_back(arr[i]);
            }
            else {
                vn.push_back(arr[i]);
            }
        }
        
        vp.insert(vp.end(), vn.begin(), vn.end());
        for(int i = 0; i < n; i++) {
            arr[i] = vp[i];
        }
    }
};
