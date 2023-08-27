#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    // 'A' is 65
    // 'a' is 97
    // '0' is 48
    if(a >= 'A' && a <='Z'){
        cout << "This is Upper case" << endl;
    }
    else if(a >= 'a' && a <= 'z'){
        cout << "This is Lower case" << endl;
    }
    else if(a >= '0' && a <= '9'){
        cout << "This is a digit" << endl;
    }
    return 0;
}