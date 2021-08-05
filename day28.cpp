#include <bits/stdc++.h>

using namespace std;
bool match(string &s)
{
    string t = "@gmail.com";
    int i, j;
    for (i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (s[i] != t[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, k;
    cin >> n;
    vector<string> ans;
    for (k = 0; k < n; k++)
    {
        string name, email;
        cin >> name >> email;
        if (match(email))
        {
            ans.push_back(name);
        }
    }
    sort(ans.begin(), ans.end());
    for (k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << endl;
    }
}
