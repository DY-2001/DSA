// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int findIndex(int arr[], int X, int Y, int n);


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		cout<<findIndex(a,x,y,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends



int findIndex(int arr[], int X, int Y, int N)
{
    vector<int> v;
    int count_x = 0;
    int count_y = 0;
    
    
    for(int i = 0; i < N; i++) {
        if(arr[i] == X) {
            count_x++;
        }
        if(arr[i] == Y) {
            count_y++;
        }

        if(count_x == count_y && count_x != 0) {
            v.push_back(i);
        }
    }
    
    if(!v.empty())
        return *max_element(v.begin(), v.end());
    else 
        return -1;
}
