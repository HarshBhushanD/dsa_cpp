#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the number on which the calculation to be performed ";
    cin>>a>>b;

    char op;
    cout<<"input the operator";
    cin>>op;
      
      switch(op)
      {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;   
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"enter another operator"<<endl;
        break;     
      }
        return 0;
}