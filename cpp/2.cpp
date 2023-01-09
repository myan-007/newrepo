#include<iostream>
using namespace std;
int main()
{
    char s;
    cout << "Enter + for addition\nEnter - for substraction\nEnter * for multiplication\nEnter / for division\n" ;
    cin >> s;
    int a,b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    if(s=='+')
    cout << a+b;
    if(s=='-')
    cout << a-b;
    if(s=='*')
    cout << a*b;
    if(s=='/')
    cout << a/b;
    return 0;
}

