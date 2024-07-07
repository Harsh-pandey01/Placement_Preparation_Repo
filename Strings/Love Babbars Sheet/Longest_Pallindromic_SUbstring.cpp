// We are given a string and we habe to find the longest pallindromic substring

#include <bits/stdc++.h>
using namespace std;

string longestPallindrom(string str)
{
    // Bruteforce approach
    // check all the possible string as a pallindrom ------->>> o(N3)

    //    Optimised approach
    string ans = "";
    int length = 0;
    for (int i = 0; i < str.size(); i++)
    {
        // Odd substring
        int L = i, R = i;
        while (L >= 0 && R < str.size() && str[L] == str[R])
        {

            if (R - L + 1 > length)
            {
                ans = str.substr(L, R - L + 1);
                length = R - L + 1;
            }
            L--;
            R++;
        }
        // EVen Substring check
        L = i;
        R = i + 1;

        while (L >= 0 && R < str.size() && str[L] == str[R])
        {

            if (R - L + 1 > length)
            {
                ans = str.substr(L, R - L + 1);
                length = R - L + 1;
            }
            L--;
            R++;
        }
    }
    return ans ;
}

int main()
{

    string str;

    cout << "Enter the string" << endl;
    getline(cin, str);

    string ans = longestPallindrom(str);

    cout << "Ans is " << ans;

    return 0;
}