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
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
    }
    else  if(n <= 3){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 2 ; i <= n ; i += 2){
            cout << i << " ";
        }

        for(int i = 1 ; i <= n ; i += 2){
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
We have to print permutation where diff between adj eles > 1 that means >= 2.
so lets think in this way 
diff between two odds or two evens is at least 2.
for 
4 -> 1 3 2 4 -> not right
lets try even first 
4 -> 2 4 1 3 -> worked
6 -> 2 4 6 1 3 5 -> worked
8 -> 2 4 6 8 1 3 5 7
-> so if we print even first then odd that would be best
*/