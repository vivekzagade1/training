/*Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example

Input:
AAAACACBA

Output:
AACABACAA*/


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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string in;
  cin >> in;
  vector<char> res(in.length());
  vector<char>::iterator its = res.begin();
  vector<char>::iterator ite = res.end() - 1;
  //cout << res.size();
  vector<int> ch(26);
  for(int i = 0; i < in.length(); i++)
  {
    ch[in[i] - 65]++;
  }

  char mid = ',';
  // for(int i = 0; i < 26; i++)
  // {
  //   cout << ch[i] << " ";
  // }

  for(int i = 0; i < 26; i++)
  {
    // char temp = i+65;
    // cout << "IN FOR " << temp << endl; 
    while(ch[i] > 0)
    {
      if(ch[i] == 1 && mid == ',')
      {
        mid = i+65;
        ch[i]--;
        break;
      }
      if(ch[i] == 1 && mid != ',')
      {
        cout << "NO SOLUTION";
        return 0;
      }
      *its = *ite = i+65;
      its++;
      ite--;
      ch[i]-=2;
    }
    if(its == ite+1 && *its != NULL && *ite != NULL)
    {
      //cout << "O1";
      break;
    }
    else if(its == ite && mid != ',')
    {
      //cout << "O2";
      *ite = mid;
    }
    else if(its == ite && *ite != NULL )
    {
      break;  
    }

  }
  for(int i = 0; i < in.length();i++)
  {
    cout << res[i];
  }

  
  return 0;
}