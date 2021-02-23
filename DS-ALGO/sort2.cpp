/*Whenever George asks Lily to hang out, she's busy doing homework. George wants to help her finish it faster, but he's in over his head! Can you help George understand Lily's homework so she can hang out with him?

Consider an array of  distinct integers, . George can swap any two elements of the array any number of times. An array is beautiful if the sum of  among  is minimal.

Given the array , determine and return the minimum number of swaps that should be performed in order to make the array beautiful.

For example, . One minimal array is . To get there, George performed the following swaps:

Swap      Result
      [7, 15, 12, 3]
3 7   [3, 15, 12, 7]
7 15  [3, 7, 12, 15]
It took  swaps to make the array beautiful. This is minimal among the choice of beautiful arrays possible.

Function Description

Complete the lilysHomework function in the editor below. It should return an integer that represents the minimum number of swaps required.

lilysHomework has the following parameter(s):

arr: an integer array */
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the lilysHomework function below.
int lilysHomework(vector<int> arr) {
map<int,int>check;
map<int,int>::iterator itr;
for(int i=0;i<arr.size();i++)
{
  check.insert({arr[i],i});
}
vector<int>temp=arr;
sort(temp.begin(),temp.end());
/*for(int i=0;i<temp.size();i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<temp.size();i++)
{
  cout<<temp[i]<<" ";
}
cout<<endl;
*/
int swap=0;
for(int i=0;i<arr.size();i++)
{
  if(arr[i]!=temp[i])
  {
    swap++;
    int index=(check.find(temp[i])->second);
    int no=arr[i];
    arr[i]=arr[index];
    arr[index]=no;
    itr=check.find(arr[index]);
    itr->second=index;
    itr=check.find(arr[i]);
    itr->second=i;
    //cout<<"Checking for "<<temp[i]<<" index found is "<<index<<" swapping "<<arr[i]<<" "<<arr[index]<<endl;
    /*for(int i=0;i<temp.size();i++)
    {
      cout<<arr[i]<<" ";
    }*/
    //cout<<endl;
    
  }
}

/*for(itr=check.begin();itr!=check.end();itr++)
{
  cout<<itr->first<<" "<<itr->second<<endl;
}*/
return swap;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = lilysHomework(arr);
    reverse(arr.begin(),arr.end());
    int result2=lilysHomework(arr);
    if(result<=result2)
    {
      fout << result << "\n";
    }
    else
    {
      fout << result2 << "\n";
    }
    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
