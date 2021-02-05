/**You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n = 0, t = 0;
    vi v;
    cin >> n;
    for(ll i = 0; i < n-1; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for(ll j = 1; j <= n; j++)
    {
        if(v[j-1] != j)
        {
            cout << j;
            return 0;
        }
    }
    cout << n;
    return 0;

}