#include <iostream>

using namespace std;

//This is an example of compile time polymorphism which is achieved by function overloading.
class MyClass{

    //In this example one function is called in three different ways (i.e. same function name
    //with different type of parameters) which is the property of Polymorphism.
public:
    void func(int x){
        cout<<"Value of x is: "<<x<<endl;
    }
    void func(double x){
        cout<<"Value of x is: "<<x<<endl;
    }
    void func(int x, int y){
        cout<<"Value of x and y: "<<x<<" "<<y<<endl;
    }
};

int main()
{
    //Object for the class is created
    MyClass obj;

    //First function is called
    obj.func(10);
    //Second function is called
    obj.func(10.1);
    //Third function is called
    obj.func(10,20);
    return 0;
}
