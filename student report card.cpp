#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    int subject1, subject2, subject3;;

    int totalMarks(){
        return subject1 +subject2 + subject3; 
    }
    int averageMarks(){
        return totalMarks()/3;
    }
    void display(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Subject 1Marks: "<<subject1<<endl;
        cout<<"Subject 2 Marks: "<<subject2<<endl;
        cout<<"Subject 3 Marks: "<<subject3<<endl;
        cout<<"Total Marks: "<<totalMarks()<<endl;
        cout<<"Averga Marks: "<<averageMarks()<<endl;
    }
};
int main(){
    Student stud;

    int rollNo, subject1, subject2, subject3;
    string name;

    cout<<"Enter Roll No: "<<endl;
    cin>>rollNo;
    cin.ignore();//to ignore thw newline character left in the input buffer
    //getline is used to read a full line including spaces
    //cin>>name; wouldn't work well for names with spaces
    cout<<"Enter Name: "<<endl;
    getline(cin, name);
    cout<<"Enter Subject 1 Marks: "<<endl;
    cin>>subject1;
    cout<<"Enter Subject 2 Marks: "<<endl;
    cin>>subject2;
    cout<<"Enter Subject 3 Marks: "<<endl;
    cin>>subject3;

    stud.rollNo = rollNo;
    stud.name = name;
    stud.subject1  = subject1;
    stud.subject2 = subject2;
    stud.subject3 = subject3;
    stud.display();

    cout<<"Student report card generated successfully."<<endl;

    return 0;
}