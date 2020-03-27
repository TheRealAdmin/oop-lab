//This code is incomplete because I'm a beginner in OOP and i find it very hard to learn just from presentations without any explenation of the topic
//moreover i fell like the tasks should described a little bit more for as they seemed hard to understand.
#include <iostream>
#include <math.h>

using namespace std;

class Circle{

private:
    double radius;
    string color;

public:
    Circle (){
        //default constructor
        radius=10;
        color="red";
    }

    Circle (int r,string c){
        //parameterized constructor
        radius=r;
        color=c;
    }

    double getRadius(){
        return radius;
    };

    double getArea(){
        return radius*radius*M_PI;
    };

    //Circle* compareArea(Circle* otherCircle);


};

/*Circle* Circle::compareArea(Circle* otherCircle){
        Circle* example=new Circle();
        if (otherCircle->getArea()>example->getArea()){
            delete example;
            return otherCircle;
        }
        else if (otherCircle->getArea()<example->getArea()){
            delete example;
            return example;
        }
        else{
            return 0;
        }



    };*/



int main()
{

    double r;
    Circle example;
    cout <<"default radius is equal: "<<example.getRadius()<<endl;
    cout <<"default area is equal: "<<example.getArea()<<endl;
    /*cout <<"\nenter radius of your circle"<<endl;
    cin>>r;
    Circle newCircle(r,"");
    Circle* otherCircle;
    otherCircle=&newCircle;
    cout<<otherCircle->compareArea(example)<<endl;*/



    return 0;
}
