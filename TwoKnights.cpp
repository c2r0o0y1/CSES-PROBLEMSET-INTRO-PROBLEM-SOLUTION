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
    ll size;
    cin >> size;

    for(ll i = 1 ; i <= size ; i++){
        ll totalPos = (i*i)*(i*i-1)/2;
        ll attackPos = 4*(i-1)*(i-2);
        cout << (totalPos-attackPos) << "\n";
    }

}

/*
total num of ways two knights can place on a chess
first knight = n^2
second = (n^2-1)

distinct ways = n^2*(n^2-1)/2

attack positions ->
4(n-1)(n-2)
*/