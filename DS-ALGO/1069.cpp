/**You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3**/

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
    string s;
    getline(cin, s);
    ll length = s.length();
    ll count = 0 , temp_count = 0;
    for(ll i = 1; i < length; i++)
    {
        while(s[i] == s[i-1] && i < length)
        {
            temp_count++;
            i++;
            if(s[i] != s[i-1] && i < length)
            {
                i--;
                if( count < temp_count+1)
                {
                    count = temp_count +1;
                }
                temp_count = 0;
                break;
            }
            else if(i == length-1 && s[i] == s[i-1] )
            {
                temp_count++;
                if( count < temp_count+1)
                {
                    count = temp_count +1;
                }
                temp_count = 0;
                break;
            }
        }
    }
    if(count == 0)
    {
        cout << "1";
        return 0;
    }
    cout << count <<endl;
    return 0;
}