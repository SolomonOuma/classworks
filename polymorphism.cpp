#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    protected:
    string type;
    public:
    virtual void setType(string ty){type=ty;}
    virtual string getType(){return type;}
    virtual void area()=0;//make this purely virtual for derived classes to implement
};
class Rectangle:public Shape{
    private:
    double length;
    double width;
    
    public:
    Rectangle(double len, double wid){
        length=len;
        width=wid;
    }
    void area()override{cout<<"Area for Rectangle is "<<length*width<<"cm2"<<endl;}
};
class Circle:public Shape{
    private:
    double radius;
    const double PI=3.14159;
    public:
    //constructor 
    Circle(double rad){radius=rad;}
    //function area for circle
    void area()override{cout<<"Area for  Circle "<<PI*radius*radius<<"cm2"<<endl;}
};
int main(){
    int choice;
    cout<<"Choose 1 for Rectangle or 2 for circle: "<<endl;
    cin>>choice;

    Shape*shapePtr=nullptr;//pointer to a shape object

    if (choice==1){
        double length; 
        double width;
        cout<<"length: "<<endl;
        cin>>length;
        cout<<"width: "<<endl;
        cin>>width;
        //create a rectangle object to be pointed by the pointer
        shapePtr=new Rectangle(length,width);
    }
    else if (choice==2){
        double radius;
        cout<<"radius: "<<endl;
        cin>>radius;
        //create a circle object
        shapePtr=new Circle(radius);
    }
    else{
        cout<<"Invalid entry"<<endl;
        return 0;
    }
    shapePtr->area();//call the area function of the selected shape
    delete shapePtr;
    return 0;
}