#include<iostream>
using namespace std;
class Employee{
    public:
    int idNO;
    string name;
    string occupation;
    void display(){
        cout<<"Employee ID: "<<idNO<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Occupation: "<<occupation <<endl;
    }
};
int main(){
    Employee emp;
    int idNO;
    string name;
    string occupation;

    cout<<"Enter Employee ID:"<<endl;
    cin>>idNO;
    cout<<"Enter Employee Name: "<< endl;
    cin>>name;
    cout<<"Enter Employee Occupation: "<<endl;
    cin>>occupation;

    emp.idNO = idNO;
    emp.name = name;
    emp.occupation = occupation;

    emp.display();
    
    cout<<"Your details are saved successfully."<<endl;
    return 0;
}