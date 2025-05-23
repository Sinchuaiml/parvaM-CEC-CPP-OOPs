#include<iostream>
using namespace std;

void sayHello(){
    cout << "Hello!" <<endl;
}

int sayHi(string name){
    cout << "Hi,"<< name <<endl;
}

int greet(string fname, string lname ,int age){
    cout << "Hi," << fname << " " << lname <<",age:"<<age<<endl;
}

int main(){
    string firstName, friendName ,lastName;
    int age;
    cout << " enter your first name:";
    cin >> firstName;
    cout << "enter your last name:";
    cin >> lastName;
    cout << "enter your friend's name:";
    cin >> friendName;
    cout << "enter your age :";
    cin >> age;
    sayHello();
    sayHi(firstName);
    sayHi(friendName);
    greet(firstName, lastName, age);
}