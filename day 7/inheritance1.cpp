#include<iostream>
using namespace std;

class Parent{
    private:
        int net_worth=0;
    public:
        string family_name,family_head;
        int number_of_members;

        void setData(int worth, string familyName, string familyHead, int member_count){
            net_worth=worth;
            family_name=familyName;
            family_head=familyHead;
            number_of_members=member_count;
        }

        int showNetWorth(){ //getter
            return net_worth;
        }

        int getFamilyInfo(){ //getter
            cout<< "I'm from "<<family_name<<" family, and my family head is "<<family_head
            <<" . Our Family's Net-worth is about "<<showNetWorth()<<endl;
        }

};
//syntax for declaring the derived class:
//class derived-class-name : accessibility-mode base-class-name
//1)by default : derived class uses private accessibility mode

//2)if derived class uses private accessibility mode then public data & member function of the base class will become private

//3)if derived class uses public accessibility mode then public data & member function of the base class will  remain public

//4) Derived class cannot inherit the data & member functions of private

//class Child : Parent{ //derived class (by default private)}
//class Child :  Private Parent{ //derived class (private- accessibility mode)}
class Child : public Parent{  //Derived Class (private- accessibility mode)
    public: 
        string member_name;
        int age;

        void addDetails(string name, int person_age){  //Member function
            member_name=name;
            age=person_age;
        }

        void getFamilyDetails(){ //Member function
            cout<<"My Name is "<<member_name<< " and I'm "<<age<<" years old .";
            getFamilyInfo();  //Inheriting the properties of Base Class
        }
};
int main(){
    string fName,fHead, cName;
    int childAge , fWorth,fMembers;

    cout<< "Enter your family name, familyhead, number of members & networth: ";
    cin>>fName>>fHead>>fMembers>>fWorth;

    Parent p1;
    p1.family_name;
    //p1.net-worth can't access bcz it is private
    p1.setData(fWorth,fName,fHead,fMembers);
    p1.getFamilyInfo();

    cout<<"Enter your name & age: ";
    cin>>cName>>childAge;

    Child c1;
    //c1.family_head:(As child class is derived with public - accessibility  mode
    //we can directly access the public data of the base class)
    c1.setData(fWorth,fName,fHead,fMembers);
    c1.addDetails(cName , childAge);
    c1.getFamilyDetails();

}