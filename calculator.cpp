#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    if (y==0){
        cout<<"Error:Divisio by zero is not allowed."<<endl;
        return 0; //retrun 0 to indicate an error
    }
    return x/y;
}
int main(){
    int choice;
    int a, b;
    cout<<"Calculator menu: "<<endl;

    cout<<"1.Addition."<<endl;
    cout<<"2.Subtraction."<<endl;
    cout<<"3.Division."<<endl;
    cout<<"4.Multiplication."<<endl;

    cout<<"Enter number1: "<< endl;
    cin>>a;
    cout<<"Enter number2: " <<endl;
    cin>>b;
    cout<<"Enter choice(1-4): "<<endl;
    cin>>choice;

    //conditional statements to perform operations
    switch(choice){
        case 1:
        cout<<"Addition: "<<add(a, b)<<endl;
        break;
        case 2:
        cout<<"Subtraction: "<<subtract(a, b)<<endl;
        break;
        case 3:
        cout<<"Division: "<<divide(a, b)<<endl;
        break;
        case 4:
        cout<<"Multiplication: "<<multiply(a, b)<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
        break;
    }
    return 0;
}