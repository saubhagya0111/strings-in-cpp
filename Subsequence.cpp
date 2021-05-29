#include <bits/stdc++.h>
using namespace std;
void subseqence()
{
    string s1, string s2;
    cout << "Enter the first string" << endl;
    cin >> s1;
    cout << "Enter the string which you want to check if its the subsequence" << endl;
    cin >> s2;
    int s1_l = s1.length();
    int s2_l = s2.length();
    int j = 0 for (int i = 0; i < s1_l && j < s2_l; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
    if (j == m)
    {
        cout << "Subsequence" << endl;
    }
    else if (j != m)
    {
        cout << "Not a subsequence" << endl;
    }
}
int main()
{
    subseqence();
     return 0;
}
