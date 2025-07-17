#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    public:
    void setName(string n){name=n;}
    string getName(){return name;}
};
//define a derived class LibraryMember
class LibraryMember: public Person{
    private:
    int memberID;
    int booksBorrowed;
    //define a constructor to initialize the data members
    public:
    LibraryMember(string n, int mID, int bksB):Person(),memberID(mID),booksBorrowed(bksB){setName(n);}
    int getMemberID(){return memberID;}
    int getBooksBorrowed(){return booksBorrowed;}
};
//define a derived class PremiumMember
class PremiumMember:public LibraryMember{
    private:
    double membershipFee;
    public:
    //create a constructor to initialize data members
    PremiumMember(string n, int mID, int bksB, double mFee): LibraryMember(n, mID, bksB),membershipFee(mFee){}
    double getMembershipFee(){return membershipFee;}
};
//main
int main(){
    //create an object for library Members with the constructor parameters
    LibraryMember lm("Suleiman", 336699,2);
    cout<<"Name: "<<lm.getName()<<endl;
    cout<<"MemberID: "<<lm.getMemberID()<<endl;
    cout<<"Book(s) Borrowed: "<<lm.getBooksBorrowed()<<endl;
    //create a Premium Member object with constructor parameters
    PremiumMember pm("Cole Snow", 778892,3,2500.0);
    cout<<"Name: "<<pm.getName()<<endl;
    cout<<"MemberID: "<<pm.getMemberID()<<endl;
    cout<<"Book(s) Borrowed: "<<pm.getBooksBorrowed()<<endl;
    cout<<"MembershipFee: "<<pm.getMembershipFee()<<endl;
    return 0;
}