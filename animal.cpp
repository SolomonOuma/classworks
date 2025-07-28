#include<iostream>
using namespace std;

class Animal{
    protected:
    string name;
    public:
    virtual void setName(string n){name = n;}
    virtual string getName(){return name;}
    virtual void speak() = 0;//pure virtual function
    virtual ~Animal(){} //virtual destructor to ensure proper cleanup of derived classes
};
class Dog : public Animal{
    public:
    void speak() override {cout<<"Woof!"<<endl;}
};
class Cat: public Animal{
    public:
    void speak()override{cout<<"Meaow!"<<endl;}
};
class Cow: public Animal{
    public:
    void speak()override{cout<<"Moo!"<<endl;}
};
int main(){
    Animal* animalPtr;
    //create objects of the derived classes
    Dog dog;
    Cat cat;
    Cow cow;
    //point to the derived class objects
    string dogName;
    cout<<"Enter the name of the dog: ";
    cin>>dogName;
    //link name to the dog object
    dog.setName(dogName);
    animalPtr = &dog;//point to the dog object
    animalPtr->speak();//call the speak method of the cow object

    string catName;
    cout<<"Enter the name of the cat: ";
    cin>>catName;
    //link name to the cat object
    cat.setName(catName);
    animalPtr = &cat;//point to the cat object
    animalPtr->speak();//call the speak method of the cow object

    string cowName;
    cout<<"Enter the name of the cow: ";
    cin>>cowName;
    //link name to the cow object
    cow.setName(cowName);
    animalPtr = &cow;//point to the cow object
    animalPtr->speak();//call the speak method of the cow object
    
    return 0;
}