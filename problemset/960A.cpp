#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  string t = s;
  sort(t.begin(), t.end());

  if (s != t)
    cout << "NO";
  else {
    map<char, int> c;
    c['a'] = c['b'] = c['c'] = 0;

    int n = s.size();
    for (int i = 0; i < n; i++) c[s[i]]++;

    if (c['a'] < 1 || c['b'] < 1)
      cout << "NO";
    else if (c['a'] != c['c'] && c['b'] != c['c'])
      cout << "NO";
    else
      cout << "YES";
  }

  cout << endl;

  return 0;
}

