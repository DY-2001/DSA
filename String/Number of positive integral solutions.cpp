// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    long posIntSol(string s)
    {
        long variable = 0;
        long number = 0;
        long index = 0;
        long upper = 0;
        long lower = 0;
        string p;
        
        for(long i = 0; i < s.size(); i++) {
            if(s[i] == '=') {
                index = 1;
                continue;
            }
            if(index == 1) {
                p.push_back(s[i]);
            }
        }
        
        number = stoi(p);
        variable = ((s.size() - p.size() - 2) / 2) + 1;
        
        upper = high(number - 1, number - variable);
        lower = factorial(variable - 1);
        
        if(number < variable)
            return 0;
        
        long solution = upper / lower;
        

        return solution;
        
    }
    
    long factorial(long value) {
        if(value == 1 || value == 0) {
            return 1;
        }
        return value * factorial(value - 1);
    }
    
    long high(long number, long variable) {
        long value = 1;
        for(int i = 1; i <= number; i++) {
            if(i > variable) {
                value = value * i; 
            }
        }
        return value;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
