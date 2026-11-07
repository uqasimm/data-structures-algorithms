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

string prefixToInfix(string s)
{
    int n = s.length();
    stack<string> st;
    int i = n - 1;
    while (i >= 0)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string arg = '(' + t1 + s[i] + t2 + ')';
            st.push(arg);
        }
        i--;
    }

    return st.top();
}

string prefixToPostfix(string s)
{
    int n = s.length();
    int i = n - 1;
    stack<string> st;
    while (i >= 0)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string arg = t1 + t2 + s[i];
            st.push(arg);
        }
        i--;
    }

    return st.top();
}

int main()
{
    string inp = "*+PQ-MN";
    string result = prefixToPostfix(inp);
    cout << result << endl;
    return 0;
}