#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char ope;
    cout<<"enter the value of first operand: ";
    cin>>a;

    cout<<"enter the value of second operand: ";
    cin>>b;

    cout<<"enter the operation you want to perform: ";
    cin>>ope;

    switch(ope){
        case '+' : cout<< "addition of two operands is : " <<(a+b) <<endl;
        break;

        case '-' : cout<< "substraction of two operands is : " <<(a-b) <<endl;
        break;

        case '*' : cout<< "multiplication of two operands is " <<(a*b) <<endl;
        break;

        case '/' : cout<< "division of two operands is " <<(a/b) <<endl;
        break;

        return 0;
    }
}