#include <bits/stdc++.h> // includes all libraries
using namespace std;

void printName(string name);
int sum(int a, int b);
void something(int &num);

int main()
{
    // L1-Start

    // int x, y;
    // cout << "Enter the Value of x and y: ";
    // cin >> x >> y;
    // cout << "Value of x = " << x << " and y = " << y;

    // L1-End

    // L2-Start

    // int
    // int x = 10;
    // // long
    // long y = 15;

    // long long z = 100000;
    // cout << x << endl;

    // // float, double
    // float p = 5;
    // double q = 5.31231;
    // cout << p << "\n" << q;

    // string and getline
    // string s;
    // cin >> s; // here only before space will be stored in s! (no spaces allowed)
    // cout << s;

    // string str;
    // getline(cin, str); // getline reads the entire line until the line break
    // cout << str;

    // char (Character)
    // char ch = 'Q';
    // // cin >> ch;
    // cout << ch;

    // L2-End

    // L3-Start

    // int age;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are an adult!";
    // }
    // else if(age < 18 && age >= 15){
    //     cout << "You are a teenager!";
    // }
    // else
    // {
    //     cout << "You are a child!";
    // }

    // int marks;
    // cin >> marks;
    // if (marks >= 80)
    // {
    //     cout << "A";
    // }
    // else if (marks >= 60)
    // {
    //     cout << "B";
    // }
    // else if (marks >= 50)
    // {
    //     cout << "C";
    // }
    // else if (marks >= 45)
    // {
    //     cout << "D";
    // }
    // else if (marks >= 25)
    // {
    //     cout << "E";
    // }
    // else{
    //     cout << "F";
    // }

    // int age;
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "Not Eligible";
    // }
    // else if(age <= 57){
    //     cout << "Eligible for Job";
    //     if (age >= 54)
    //     {
    //         cout << ", but retirement soon!";
    //     }

    // }
    // else{
    //     cout << "Retirement Time!";
    // }

    // L3-End

    // L4-Start

    // int day;
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    // {
    //     cout << "Monday";
    //     break;
    // }
    // case 2:
    // {
    //     cout << "Tuesday";
    //     break;
    // }
    // case 3:
    // {
    //     cout << "Wednesday";
    //     break;
    // }
    // case 4:
    // {
    //     cout << "Thursday";
    //     break;
    // }
    // case 5:
    // {
    //     cout << "Friday";
    //     break;
    // }
    // case 6:
    // {
    //     cout << "Saturday";
    //     break;
    // }
    // case 7:
    // {
    //     cout << "Sunday";
    //     break;
    // }

    // default:
    // {
    //     cout << "Wrong Day Number!";
    //     break;
    // }
    //     cout << "Checking Inside Switch"; // ignored bcz control shifted to outside switch
    // }

    // cout << "\n" << "Checked Switch!";

    // L4-End

    // L5-Start

    // Array

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // arr[3] += 10;
    // cout << arr[3];

    // 2D-Array

    // int arr[3][5]; // [row][column], here 3 rows and 5 columns and the elements are identified as (0, 3) means row = 0, column = 3
    // arr[1][3] = 78;
    // cout << arr[1][3];

    // Strings

    // string s = "Striver";
    // cout << s[3] << endl;
    // cout << s.size() << endl; // s.length()
    // cout << s[s.size() - 1];

    // L5-End

    // L6-Start

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i + 1 << ". Hello World!" << endl;
    // }

    // L6-End

    // L7-Start

    // int i = 0;
    // while (i < 5)
    // {
    //     cout << "Hello World!" << endl;
    //     i++;
    // }

    // int i = 6;
    // do
    // {
    //     cout << "Hello World!" << endl;
    //     i++;
    // } while (i < 5);

    // L7-End

    // L8-Start

    // Functions types: 1. Void 2. Return 3. Parameterized 4. Non-Parameterized

    // string name;
    // getline(cin, name);
    // printName(name);

    // int num1, num2;
    // cin >> num1 >> num2;
    // int num3 = sum(num1, num2);
    // cout << num3;

    // int num = 10;
    // something(num); // pass by value, here the copy of num goes in the function and the original num remains the same
    // cout << num << endl;

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    
    // L8-End
    return 0;
}

void printName(string name)
{
    cout << "Hey " << name << "!" << endl;
}

int sum(int a, int b){
    return a + b;
}

void something(int &num){ // by using & symbol we make it passed by reference function now the original memory address goes and the changes are made to the original variable
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}