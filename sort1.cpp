/**The first two strings are replaced with '-'. Since the maximum associated integer is , set up a helper array with at least two empty arrays as elements. The following shows the insertions into an array of three empty arrays.

i	string	converted	list
0				[[],[],[]]
1 	a 	-		[[-],[],[]]
2	b	-		[[-],[-],[]]
3	c			[[-,c],[-],[]]
4	d			[[-,c],[-,d],[]]
The result is then printed:  .

Function Description

Complete the countSort function in the editor below. It should construct and print the sorted strings.

countSort has the following parameter(s):

string arr[n][2]: each arr[i] is comprised of two strings, x and s
Returns
- Print the finished array with each element separated by a single space.*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n=0;
  cin>>n;
  string arr[100];
  for(int i=0;i<n;i++)
  {
    int temp=0;
    string str;
    cin>>temp;
    cin>>str;
    if(i<n/2)
    {
      arr[temp]+='-';
      arr[temp]+=' ';
    }
    else if(i>=n/2)
    {
      arr[temp]+=str+' ';
    }
  }
  for(int i=0;i<100;i++)
  {
    cout<<arr[i];
  }
}
