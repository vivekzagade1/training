#include<iostream>

using namespace std;

int main()
{
    int n = 0, k = 0, ans = 0, temp = 0, i = 0, score = 0;
    
    cin >> n;
    cin >> k;

    ans = k;
    n -= k;
    for(i = 0; i < k; i++)
    {
        cin >> temp;
        if(temp == 0)
        {
            ans--;
        }
    }
    score = temp;
    while(n != 0)
    {
        cin >> temp;
        if(temp != score || temp == 0)
        {
            break;
        }
        ans++;
        n--;
    }
    cout << ans;
    return 0;
}