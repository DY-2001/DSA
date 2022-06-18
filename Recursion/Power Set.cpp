#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    vector<string> vec;
    
	public:
		vector<string> AllPossibleStrings(string s){
		    string i = s;
            string o = "";
            subsets(i, o);
            sort(vec.begin(), vec.end());
            return vec;
 		}
 		
 		void subsets(string i, string o) {
            if(i.length() == 0) {
                if(o != "")
                    vec.push_back(o);
                return; 
            }
            
            string o1, o2;
            o1 = o;
            o2 = o;
            o1.push_back(i[0]);
            i.erase(i.begin() + 0);
            
            subsets(i, o1);
            subsets(i, o2);
        }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends
