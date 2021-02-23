#include<iostream>

using namespace std;

int main()
{
    int no = 0, a = 0, b = 0, c = 0, ans = 0;

    cin >> no;

    for(int i = 0; i < no; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;

        if(a == 1 && b == 1)
        {
            ans++;
        }        
        else if(a == 1 && c == 1)
        {
            ans++;
        }
        else if(b == 1 && c == 1)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}