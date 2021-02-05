#include<iostream>

using namespace std;

int main()
{
    int weight = 0;

    cin >> weight;

    double temp = (double)weight / 2;

    if(temp - (int)temp > 0 && temp - (int)temp < 1)
    {
        cout << "NO";
    }
    else if (weight == 2)
    {
        cout << "NO";
    }
    
    else
    {
        cout << "YES";
    }
    
    return 0;
}

