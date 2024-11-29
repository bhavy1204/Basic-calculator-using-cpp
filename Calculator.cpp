#include <iostream>
#include <cmath>
using namespace std;
void manual(){
    cout<<"Welcome to manual !"<<endl;
    cout<<"2. Enter '%' at operation for finding remainder "<<endl;
    cout<<"1. Enter 'S' at operation for finding square root of number "<<endl;
    cout<<"1. Enter 'A' at operation for avg "<<endl;
    cout<<"1. Enter 'M' at operation for finding max of two numbers "<<endl;
}
void calc(double n1,char op,double n2){
    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    case '%':
        cout<<int(n1)%int(n2);
        break;
    case 'A':
        cout<<(n1+n2)/2.0;
        break;
    case 'M':
        if (n1>=n2)
            cout<<n1;
        else
            cout<<n2;
        break;
    case 'S':
        cout<<"n1 :"<<sqrt(n1)<<endl;
        cout<<"n2 :"<<sqrt(n2)<<endl;
        break;
    case '!':
        break; 
    default:
        break;
    }
}
int main()
{
    system("cls");
    double n1,n2;
    char op;
    cout<<"Enter '000' for a manual to use operations !"<<endl;
    cout<<"Enter your expression ('num1' 'operation' 'num2'(2+3)) :- "<<endl;
    cin>>n1;
    cin>>op;
    cin>>n2;
        if (n1==000 )
    {
        manual();
    }
    calc(n1,op,n2);
    return 0;
}