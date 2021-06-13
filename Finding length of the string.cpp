#include <iostream>
using namespace std;
int length(string s)
{
    int i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}
int main()
{
    string s;
    cout << "Enter the string\n";
    getline(cin, s);
    cout << length(s) << endl;
    return 0;
}
