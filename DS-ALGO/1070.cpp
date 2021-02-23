/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
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

int main()
{
    ll n = 0;
    cin >> n;

    if( n == 1)
    {
        cout << n;
        return 0;
    }
    else if( n == 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else if( n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else 
    {
        vi v;
        ll i = 2;
        ll j = 1;
        while(i <= n)
        {
            v.push_back(i);
            i += 2;
        }
        while (j <= n)
        {
            v.push_back(j);
            j += 2;
        }
        for (ll k = 0; k < n ; k++)
        {
            cout << v[k] << " ";
        }
    }
    return 0;
}