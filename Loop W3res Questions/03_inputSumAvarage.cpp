#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "print input for n";
    // int n;
    int input;

    int sum = 0;

    for (int i = 1; i <= input; i++)
    {
        cin >> input;
        sum += input;
    }

    int ava = sum / 10;
    // cout << input << endl;
    cout << sum <<"this is sum" << endl;
    cout << ava << endl;
}