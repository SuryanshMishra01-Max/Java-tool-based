#include <iostream>
using namespace std;
int main()
{
  string s;
  cin >> s;

  // precompute
  int hash[26] = {0}; // hash[256]
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++; // hash[s[i]]++//
  }
  int q;
  cin >> q;
  while (q--)
  {
    char c;
    cin >> c;
    // fetch
    cout << hash[c - 'a'] << endl; // hash[c]
  }
  return 0;
}
