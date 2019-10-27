/*input
5
2 3 4 5 7
*/

//sometimes it's the people who no one imagines anything of 
//who do the things that no one can imagine.

//code author: iamxlr8

#include <bits/stdc++.h>
using namespace std;

#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
#define endl "\n"
#define st string 
#define vs vector<st>
#define rep(i,m,n) for(ll i = m; i < n; i++)
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define dbg(x) cout << #x << " = " << x << '\n'
#define pb push_back
#define F first
#define S second

int max(int a, int b, int c) { return max(max(a, b), c); } 


int maxCrossingSum(int arr[], int l, int m, int h) 
{ 
    int sum = 0; 
    int left_sum = INT_MIN; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > left_sum) 
          left_sum = sum; 
    } 
  
    sum = 0; 
    int right_sum = INT_MIN; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > right_sum) 
          right_sum = sum; 
    } 
  
    return left_sum + right_sum; 
} 
  

int maxSubArraySum(int arr[], int l, int h) 
{ 
   if (l == h) 
     return arr[l]; 
   int m = (l + h)/2; 
   return max(maxSubArraySum(arr, l, m), 
              maxSubArraySum(arr, m+1, h), 
              maxCrossingSum(arr, l, m, h)); 
} 


int main() 
{
	off;
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int n;
	cout<<"enter array size\n";
	cin>>n;
	int arr[n];
	cout<<"enter array elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"maximum subarray sum is "<<maxSubArraySum(arr,0,n-1)<<endl;
	return 0;
}