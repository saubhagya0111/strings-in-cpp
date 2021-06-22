#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cout << "Enter the string\n";
    getline(cin, s);
    string s1;
    int l = s.length(), flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[l - i - 1])
        //The palindromic string has its nth charecter from the starting and the corresponding charecter from the end as identical 
        //Flag variable has been used in order to check the above criteria
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Palindrome\n";
    }
    else if (flag == 1)
    {
        cout << "Not a Palindrome\n";
    }

    return 0;
}
