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

    ll totalSum = n*(n+1)/2;

    if(totalSum%2 == 1){  //need to divide two equal sum set
        cout << "NO" << "\n";
    }

    else{
        cout << "YES" << "\n";
        ll target = totalSum/2;

        unordered_set<ll> s;

        ll end = n;
        
        ll sum = 0;

        while(sum < target){
            sum += end;
            s.insert(end);
            end--;
        }

        while(sum > target){
            sum -= (end+1);

            assert(sum < target);

            if(s.find(end+1) != s.end()){
                s.erase(end+1);
            }

            s.insert(target-sum);
        }

        cout << s.size() << "\n";

        for(ll i : s){
            cout << i << " ";
        }

        cout << endl;

        cout << n-s.size() << "\n";

        for(int i = 1 ; i <= n ; i++){
            if(s.find(i) == s.end()){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}