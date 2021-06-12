#include <bits/stdc++.h>
using namespace std;
//Reversing a string 
int main()
{
    string s, s1;
    int c;
    cout << "Enter the string\n";
    getline(cin, s);
    //property of the concatenation of the strings has been used 
    for (int i = s.length(); i >= 0; --i)
    {
        s1 += s[i];
    }
    cout << "Reversed string-->" << s1 << "\n";
    
    return 0;
}
