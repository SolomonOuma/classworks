#include<iostream>
using namespace std;
//create a class named Class
class Car{
    private:
    string brand;
    string model;
    float price;
    int mileage;

    public:
    //create a constructor to initialize the data members
    Car(string brand1, string model1, float price1, int mileage1){
        brand=brand1;
        model=model1;
        price=price1;
        mileage=mileage1;

    }
    int getx(){
        return brand1;
        return model1;
        return price1;
        return mileage1;
    }
    void display(string brand1, string model1, float price1, int mileage1){
        return brand1;
        return model1;
        return price1;
        return mileage1;

    }
    void drive(int distance){
        return mileage1+=distance;
    }
};
//main
int main(){
    //create a Car object
    Car c1;
    //initialize the arguments
    string brand1;
    string model1;
    float price1;
    int mileage1;

    //link the object with the arguments
    c1.setBrand="Toyota";
    c1.setModel="Corolla";
    c1.setPrice=20000;
    c1.setMileage=5000;

    cout<<c1.display()<<endl;
    cout<<c1.drive(150)<<endl;
    cout<<c1.drive(300)<<endl;
}