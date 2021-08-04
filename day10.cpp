#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, max = 0, count = 0;
    cin >> n;
    string bin;
    while (n != 0)
    {
        bin = (n % 2 == 0 ? '0' : '1') + bin;
        n = n / 2;
    }
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin[i] == '1')
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << max;
    return 0;
}
