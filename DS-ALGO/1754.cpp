/*You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

Input

The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output

For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1≤t≤105
0≤a,b≤109
Example

Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES*/

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

  f(0, no, 1)
  {
    ll no1 = 0, no2 = 0;
    cin >> no1 >> no2;
    
    if((2*no1 - no2) >= 0 && (2*no1 - no2)%3 == 0 && (2*no2 -no1) >=0 && (2*no2 - no1)%3 == 0 )
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
    
  }
  return 0;
}