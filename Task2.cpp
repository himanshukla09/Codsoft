#include<iostream>
using namespace std;
int main (){
    int a,b;
    // a and b are number:
    char c;
    cout<<"Enter first number=";
    cin>>a;
    cout<<"Enter operator sign ('+','-','*','/')=";
    cin>>c;
    cout<<"Enter second number=";
    cin>>b;
    switch (c)
    {
    case '+': cout<<a+b<<endl;
        break;
     case '-': cout<<a-b<<endl;
        break;
     case '*': cout<<a*b<<endl;
        break;
     case '/':
     if(b!=0) cout<<a/b<<endl;
     else cout<<"Error! divison by '0' is not allowed ";
        break;
    
    default: cout<<"Invalid operator";
    }
    return 0;

}