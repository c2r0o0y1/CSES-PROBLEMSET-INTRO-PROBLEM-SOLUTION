#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    ll res = 0;

    for(ll i = 1 ; i < n ; i++){
        if(arr[i] < arr[i-1]){
            res += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }

    cout << res << "\n";
}