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
    cout << "0. Enter 'Q' to exit from calculator "<<endl;
    cout << "1. Enter '%' at operation for finding remainder " << endl;
    cout << "2. Enter 'S' at operation for finding square root of number " << endl;
    cout << "3. Enter 'A' at operation for avg " << endl;
    cout << "4. Enter 'M' at operation for finding max and min of two numbers"<< endl;
    cout << "5. Enter '!' at operation for finding factorial of a number " << endl;
    cout << "6. Enter '|' at operation for finding absolute of two numbers " << endl;
    cout << "7. Enter 'P' at operation for Exponent of anumber " << endl;
    cout << "8. Enter 'T' for trignometric calculations " << endl;
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
            cout <<"Result : "<< a + b;
            break;
        case '-':
            input();
            cout <<"Result : "<< a - b;
            break;
        case '*':
            input();
            cout <<"Result : "<< a * b;
            break;
        case '/':
            input();
            if (b!=0)
               cout <<"Result : "<< a / b;
            else
               cout<<"Divison by zero not allowed";
            break;
        //remainder of two numbers
        case '%':
            input();
            cout <<"Result : "<< int(a) % int(b);
            break;
        //average of two numbers
        case 'A':
            input();
            cout <<"Result : "<< (a + b) / 2.0;
            break;
        //absolute of two numbers
        case '|':
            input();
            cout<<"Result : "<<abs(a-b);
            break;
        //Max of 2 numbers
        case 'M':
            input();
            cout <<"Max : "<<max(a,b)<<endl;
            cout <<"Min : "<<min(a,b)<<endl;
            break;
        //Square root
        case 'S':
            do{
            cout<<"Enter a +ve num : ";
            cin>>a;
            }while(a<0);
            cout <<"Result : "<< sqrt(a) << endl;
            break;
        //sum
        case 'F':
            cout<<"ENter num ";
            cin>>a;
            int sum=0;
            for (int i = 0; i < a; i++)
            {
                sum+=i;
            }
            coutt<<sum;
            break;
        //Fcatorial
        case '!':
            do{
            cout<<"Enter a +ve num : ";
            cin>>a;
            }while(a<0);
            cout<<"Result : "<<fact(a);
            break;
        case 'P':
            input();
            cout<<"Result : "<<pow(a,b);
            break;
        case 'q':
            cout<<"Exiting";
            break;
        default:
            cout<<" INVALID SYNTAX ";
            break;
        }
    }
    //factorial function
    int fact(int n){
        int res=1;
        for (int i = 1; i <= n; i++)
        {
            res *=i;
        }
        return res;
    }
};
int main()
{
    system("cls");
    calculator c;
    char op;
    do
    {
    cout<<"\n---------------------------------------------------------------"<<endl;
    cout << "Enter 'h' for a manual to use operations !" << endl;
    cout << "Enter your operation(+,-,!,/....etc):- " << endl;
    cin >> op;
    cout<<"---------------------------------------------------------------"<<endl;
    if (op == 'H' || op == 'h')
        c.manual();
    else if(op=='T'|| op =='t')
        cout<<"Building....";
    else
        c.calculation(op);
    } while (op!='q');
    return 0;
}