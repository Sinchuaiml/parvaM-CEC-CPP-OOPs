#include<iostream>
using namespace std;

class parent{ // base class
    private:
        int net_worth=0;
    public:
        string family_name,family_head;
        int number_of_members = 0
        ;

        void setData(int worth, string familyName,string familyHead,int member_count){
            net_worth=worth;
            family_name=familyName;
            family_head=familyHead;
            number_of_members=member_count;
        }

        int showNetWorth(){
            cout<<net_worth;
        }

         int getFamilyinfo(){
            cout<<"I'm from "<<family_name<<" family, and my family head is "<<family_head<<" , our family's net worth is about "<<showNetWorth()<<endl;
        }
};

class child:public parent{
    public:
        string member_name;
        int age;

        void addDetails(string name, int person_age){
            member_name=name;
            age=person_age;
        }

        void getFamilyDetails(){
            cout<<"my name is "<<member_name<<" and I'm "<<age<<" years old. "<<getFamilyinfo();

        }
};

int main(){
    string fname,fhead,cname;
    int childAge, fworth, fmembers;

    cout<<"enter your family name, family head, number of members & net worth:";
    cin>>fname>>fhead>>fmembers>>fworth;

    parent p1;
    p1.setData(fworth, fname, fhead,fmembers);
    
    cout<<"enter your name & age:";
    cin>>cname>>childAge;

    child c1;
    c1.setData(fworth,fname, fhead, fmembers);
    c1.addDetails(cname,childAge);
    c1.getFamilyDetails();

}