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

string postfixToInfix(string s)
{
    int i = 0;
    stack<string> st;
    int n = s.length();
    while (i < n)
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
            string arg = '(' + t2 + s[i] + t1 + ')';
            st.push(arg);
        }
        i++;
    }

    return st.top();
}

string postfixToPrefix(string s)
{
    int i = 0;
    int n = s.length();
    stack<string> st;

    while (i < n)
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
            string arg = s[i] + t2 + t1;
            st.push(arg);
        }
        i++;
    }

    return st.top();
}

int main()
{
    string inp = "AB-DE+F*/";
    string result = postfixToPrefix(inp);
    cout << result << endl;
    return 0;
}