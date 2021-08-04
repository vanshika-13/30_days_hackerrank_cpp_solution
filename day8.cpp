#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    long ph_no;
    map<string, long> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> ph_no;
        m[s] = ph_no;
    }
    while (cin >> s)
    {
        if (m.find(s) != m.end())
        {
            cout << s << "=" << m.find(s)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
