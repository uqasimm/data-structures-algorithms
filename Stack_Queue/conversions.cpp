#include <bits/stdc++.h>
using namespace std;

int priority(char op)
{
    int pr = -1;
    if (op == '^')
    {
        pr = 3;
    }

    else if (op == '*' || op == '/')
    {
        pr = 2;
    }

    else if (op == '+' || op == '-')
    {
        pr = 1;
    }

    return pr;
}

string infixToPostfix(string s)
{
    int i = 0;
    stack<char> st;
    string ans = "";
    int n = s.length();
    while (i < n)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }

        else
        {
            if (s[i] == '^')
            {
                while (!st.empty() && priority(s[i]) < priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

string infixToPrefix(string s)
{
    int n = s.length();

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }

        else if (s[i] == ')')
        {
            s[i] = '(';
        }
    }

    int i = 0;
    stack<char> st;
    string ans = "";

    while (i < n)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }

            if (!st.empty())
            {
                st.pop();
            }
        }

        else
        {
            if (s[i] == '^')
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && priority(s[i]) < priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string inp = "(A+B)*C-D+F";
    // string result = infixToPostfix(inp);
    string result = infixToPrefix(inp);
    cout << result << endl;
    return 0;
}