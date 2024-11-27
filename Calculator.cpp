#include <iostream>
using namespace std;
void manual(){
    cout<<"Welcome to manual !"<<endl;
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