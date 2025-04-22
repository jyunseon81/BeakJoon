#include <iostream>
#include <stack>

using namespace std;

int main () 
{
    int count;
    cin >> count;

    while (count--)
    {
        stack<char> st;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
                st.push(s[i]);
            else
            {
                   if (st.top() == '(' && s[i] == ')')
                        st.pop();
                   else 
                        st.push(s[i]);
            }
        }
        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
