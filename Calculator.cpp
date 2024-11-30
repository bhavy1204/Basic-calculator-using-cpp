#include <iostream>
#include <cmath>
using namespace std;
class calculator
{
public:
    double a;
    double b;
    //user manual
    void manual()
    {
    cout << "Welcome to manual !" << endl;
    cout << "1. Enter '%' at operation for finding remainder " << endl;
    cout << "2. Enter 'S' at operation for finding square root of number " << endl;
    cout << "3. Enter 'A' at operation for avg " << endl;
    cout << "4. Enter 'M' at operation for finding max of two numbers " << endl;
    cout << "5. Enter '!' at operation for finding factorial of a number " << endl;
    cout << "6. Enter '|' at operation for finding absolute of two numbers " << endl;
    cout << "6. Enter 'P' at operation for Exponent of anumber " << endl;
    }
    //For taking input from user
    void input(){
        cout<<"Enter num 1 : ";
        cin>>a;
        cout<<"Enter num 2 : ";
        cin>>b;
    }
    void calculation(char op)
    {
        switch (op){
        case '+':
            input();
            cout << a + b;
            break;
        case '-':
            input();
            cout << a - b;
            break;
        case '*':
            input();
            cout << a * b;
            break;
        case '/':
            input();
            if (b!=0)
               cout << a / b;
            else
               cout<<"Divison by zero not allowed";
            break;
        //remainder of two numbers
        case '%':
            input();
            cout << int(a) % int(b);
            break;
        //average of two numbers
        case 'A':
            input();
            cout << (a + b) / 2.0;
            break;
        //absolute of two numbers
        case '|':
            input();
            cout<<abs(a-b);
            break;
        //Max of 2 numbers
        case 'M':
            input();
            cout <<max(a,b) ;
            break;
        //Square root
        case 'S':
            cout<<"Enter num : ";
            cin>>a;
            cout << "n1 :" << sqrt(a) << endl;
            break;
        //Fcatorial
        case '!':
            cout<<"Enter num : ";
            cin>>a;
            cout<<fact(a);
            break;
        case 'P':
            input();
            cout<<pow(a,b);
            break;
        default:
            cout<<" INVALID SYNTAX ";
            break;
        }
    }
    //factorial function
    int fact(int n){
        int res;
        for (int i = 1; i <= n; i++)
        {
            res *=i;
        }
        return res;
    }
};
int main()
{
    calculator c;
    char op;
    cout << "Enter 'h' for a manual to use operations !" << endl;
    cout << "Enter your operation(+,-,!,/....etc):- " << endl;
    cin >> op;
    if (op == 'H' || op == 'h')
        c.manual();
    else
        c.calculation(op);
    return 0;
}