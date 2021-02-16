/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5*/

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
    ll no = 0, temp = 0;
    vi v;

    ll result = 0;

    cin >> no;
    cin >> temp;
    v.push_back(temp);

    for(ll i = 1; i < no; i++)
    {
        cin >> temp;
        v.push_back(temp);
        if(v[i] < v[i-1])
        {
            result += (v[i-1] - v[i]);
            v[i] = v[i-1];

        }
    } 
    cout << result;
    return 0;
}
