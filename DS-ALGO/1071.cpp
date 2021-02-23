/*A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1≤t≤105
1≤y,x≤109
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
Introductory Problems
...
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
    ll row = 0, col = 0;
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> row >> col;
        if(col > row)
        {
            if(col % 2 == 1)
            {
                cout << col*col - row + 1 << endl;
            }
            else
            {
                col--;
                cout << col*col + row << endl;
            }
        }
        else
        {
            if( row % 2 == 1)
            {
                row--;
                cout << row*row + col << endl;
            }
            else
            {
                cout << row*row - (col-1) << endl;
            }
        }
           
    }
    return 0;
}