/*Palindromes are strings that read the same from the left or right, for example madam or 0110.

You will be given a string representation of a number and a maximum number of changes you can make. Alter the string, one digit at a time, to create the string representation of the largest number possible given the limit to the number of changes. The length of the string may not be altered, so you must consider 's left of all higher digits in your tests. For example  is valid,  is not.

Given a string representing the starting number, and a maximum number of changes allowed, create the largest palindromic string of digits possible or the string '-1' if it is not possible to create a palindrome under the contstraints.

Example


Make  replacements to get .



Make  replacement to get .

Function Description

Complete the highestValuePalindrome function in the editor below.

highestValuePalindrome has the following parameter(s):

string s: a string representation of an integer
int n: the length of the integer string
int k: the maximum number of changes allowed
Returns

string: a string representation of the highest value achievable or -1
Input Format

The first line contains two space-separated integers,  and , the number of digits in the number and the maximum number of changes allowed.
The second line contains an -digit string of numbers.*/

#include <bits/stdc++.h>

using namespace std;

string richieRich(string s, int n, int k){
   int lives=k;
   vector<bool> mod(n,false);  
   string temp(s); 
    
   for (int i=0;i<n/2;i++) 
   {
       if (temp[i]!=temp[n-i-1]) {mod[i]=true;lives--;}
       if (temp[i]<temp[n-i-1]) temp[i]=temp[n-i-1]; else if (temp[i]>temp[n-i-1]) temp[n-i-1]=temp[i];
       if (lives<0) return "-1";       
   }
    int j=0;
   while ((lives>0)&&(j<n/2))
   {
      if (temp[j]!='9'){
      if (mod[j]) lives++;
      if (lives>1) {temp[j]='9';temp[n-j-1]='9'; lives-=2;}
      }       
      j++;        
   }
    if (n%2==1) {if (lives>0) temp[n/2]='9';} 
    return temp;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    string result = richieRich(s, n, k);
    cout << result << endl;
    return 0;
}
