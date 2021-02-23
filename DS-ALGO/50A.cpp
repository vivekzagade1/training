#include<iostream>

using namespace std;

int getDom(int m, int n)
{
    int temp = m * n;
    int ans = temp / 2;
    return ans;
}

int main()
{
    int m = 0, n = 0;

    cin >> m;
    cin >> n;

    int ans = 0;
    ans = getDom(m, n);

    cout << ans;
}