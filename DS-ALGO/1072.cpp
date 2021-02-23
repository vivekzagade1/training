/*Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

Constraints
1≤n≤10000
Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define f(si, ei, pi) for(ll i = si; i < ei ; i+=pi)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n = 0;
    cin >> n;
    
    f(1,n+1,1)
    {
			//cout << i;
			ll totalPos =  (i*i) * (i*i-1) /2;
			ll attackPos = 4*(i-1)*(i-2);
			cout << totalPos - attackPos <<endl;
		}
		return 0;

    
}
