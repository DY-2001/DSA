#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC target ("avx2")
#pragma GCC optimization ("03")
#pragma GCC optimization ("unroll-loops")
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned char uc;
typedef string str;
 
#define pb(a) push_back(a);
#define op(a) pop_back(a);
#define ft front;
#define bk back;
#define first ff;
#define second ss;
#define make_pair mp;
#define ub upper_bound;
#define lb lower_bound;
#define vll vector<ll>
#define vb vector<bool>
#define vvll vector<vll>
#define qu queue<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll, ll>
#define vpll vector<pll>
#define mpll map<pll>
#define spll set<pll>
#define mlpll map<ll, pll>
#define slpll set<ll, pll>
#define fori(i, n) for(ll i = 0; i < n; i++)
#define forij(j, n) for(ll j = 0; j < n; j++)
#define forijm(j, m) for(ll j = 0; j < m; j++)
#define foriji(j, i, n) for(ll j = i + 1; j < n; j++)
#define ford(i, n) for(ll i = n - 1; i >= 0; i--)
#define from(v) ((v).begin(), (v).end())
#define forii(i, n) for(int i = 0; i < n; i++)
#define fordi(i, n) for(int i = n - 1; i >= 0; i--) 
 
using pi = pair<int, int>;
using vi = vector<int , int>;
using mi = map<int, int>;
using si = set<int, int>;
 
const int mod = 1000000007;
const ll MODE = 1e9 + 7;
const ll MOD = 998244353;
const ll inf = 1e9;
const int MX = 2e5 + 5;
 
int smallest_digit(int n) {
   int min = n % 10;
   n /= 10;
   while (n != 0) {
      if (min > n % 10)
         min = n % 10;
      n /= 10;
   }
   return min;
}  
 
void solve() {
   ll n;
    cin >> n;

   vll v;
   fori(i, n) {
      int a;
      cin >> a;
      v.pb(a);
   }

   reverse from(v);
   for(auto it: v) {
      cout << it << " ";
   }
   cout << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
 
	ll t;
	cin >> t;
 
	while(t > 0) {
		solve();
		t--;
	}
	return 0;
}
 
