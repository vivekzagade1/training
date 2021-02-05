#include<iostream>
#include<string>

using namespace std;

int main()
{
    int no = 0;
    string input;

    cin >> no;

    for(int i = 0; i < no; i++)
    {
        cin >> input;
        if(input.length() > 10)
        {
            cout << input[0] << input.length() - 2 << input[input.length()-1] << endl;
        }
        else
        {
            cout << input << endl;
        }
    }
    return 0;
}