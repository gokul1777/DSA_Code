#include<iostream>
using namespace std;

int main() {
    // int a;
    // cin>> a;
    // cout<< "Value of n is : " << n <<endl;

    //If a is positive
   /*
    if(a>0) {
        cout<< "A is Positive" << endl;
    }
    else
    {
        cout<< "A is negative" << endl;
    }
   */
/*
int a, b;
cout<<"Enter the value of a "<<endl;
cin>>a;
cout<<"Enter the value of b "<<endl;
cin>>b;

if(a>b) {
    cout<< "A is Greater" << endl;
}
if(b>a) {
    cout<< "B is  Greater" << endl;
}
*/

int a;
cout<<" Enter the value of a "<<endl;
cin>>a;

if(a>0) {
    cout<< "A is Positive" << endl;
}
else if(a<0) {
    cout<< "A is Negative"<< endl;
}
else {
    cout<< "A is zero"<< endl;
}
}