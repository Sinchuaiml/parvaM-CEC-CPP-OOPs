#include<iostream>
using namespace std;

int main(){
    int a;
    //syntax for declaring the pointer:
    //datatype *pointer_name
    //datatype of the pointer should be same as refrence variable datatype
    //Assign the Adress to the pointer: &variable_name
    // * refers to the pointer variable
    // & refers to the adress of the variable
    // ptr refers to the adress of the pointer
    // *ptr refers to the value of the pointer

    int *ptr = &a;

    float decimal;
    float *f= &decimal;

    cout<<"Enter the Value of a: ";
    cin>>a;

    cout<<"Enter the Value of decimal: ";
    cin>>decimal;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Adress of a: "<<&a<<endl;
    cout<<"Value of pointer(ptr): "<<ptr<<endl;
    cout<<"Adress of ptr: "<<&ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;

    cout<<"Value of decimal: "<<decimal<<endl;
    cout<<"Adress of decimal: "<<&decimal<<endl;
    cout<<"Value of pointer(ptr): "<<f<<endl;
    cout<<"Adress of ptr: "<<&f<<endl;
    cout<<"Value pointed by ptr: "<<*f<<endl;
}