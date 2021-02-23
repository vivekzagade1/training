/*Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1≤n≤109
Example

Input:
20

Output:
4*/
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
  
  ll no = 0;
  cin >> no;

  ll ans = 0;

  for(ll i = 5; no/i>=1; i*=5)
  {
    ans += no/i;
  }
  
  cout << ans;
  return 0;
}

