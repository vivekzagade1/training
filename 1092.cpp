/*Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

Input

The only input line contains an integer n.

Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1≤n≤106
Example 1

Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2

Input:
6

Output:
NO*/

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
		
		if( (no * (no+1) ) % 4 != 0 )
		{
			cout << "NO";
			return 0;
		}
		cout << "YES" << endl;
		
		ll sum = (no * (no+1) ) / 4;
		//cout << sum << endl;
		ll wsum = 0;
		
		vi v1;
		ll count = 0;
		
		while(wsum < sum)
		{
			v1.PB(no-count);
			wsum += no-count;
			count++;
			if(wsum == sum)
			{
				break;
			}
			wsum += count;
			v1.PB(count);
			if(wsum == sum)
			{
				count++;
				break;
			}
		}
		
		ll v1Len = v1.size();
		cout << v1Len << endl;
		
		f(0, v1Len, 1)
		{
			cout << v1[i] << " ";
		}
		
		cout << endl;
		
	  vi v2;
	   
		for(ll i = count; i <= no-count; i++)
		{
			v2.PB(i);
		}
		
		if(no % 2 == 0)
		{
			v2.PB(no-count+1);
		}
		
		ll v2Len = v2.size();
		cout << v2Len << endl;
		
		f(0, v2Len, 1)
		{
			cout << v2[i] << " ";
		}
		
		return 0;
}
	
