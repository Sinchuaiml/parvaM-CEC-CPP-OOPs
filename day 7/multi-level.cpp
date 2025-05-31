#include<iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        void setPersonDetails(string n , int a){
            name=n;
            age=a;
        }

        void showPersonDetails(){
            cout<<"My name is "<< name <<", and I'm "<<age<< " years old."<<endl;
        }
};

class employee:public person{ // person->employee
    private:
        string company_name,emp_id;
    public:
        void setEmployeeDetails(string compname, string empid){
            company_name=compname;
            emp_id=empid;
        }
        
        void showEmployeeDetails(){
            cout<<"I'm working in "<< company_name<<", my employee id is:"<< emp_id<<endl;
        }
};

class developer : public employee{ //person->employee->developer
    private:
        string deptname;
        int experince;
    public:
        void setDeveloperDetails(string dept, int exp){
            deptname=dept;
            experince=exp;
        }

        void showDeveloperDetails(){
            cout<<"I'll be working in "<< deptname<<" department. I've "<< experince<<" years of expereince."<<endl;
        }    
};

int main(){
    string personName, companyName, dept_name, employee_id;
    int personAge, devExperience;

    cout<<"enter your name & age:";
    cin>>personName>>personAge;

    cout<<"enter your company name & employee ID:";
    cin>>companyName>>employee_id;

    cout<<"enter your department name & experience:";
    cin>>dept_name>>devExperience;

    developer dev1;
    dev1.setPersonDetails(personName,personAge);

    dev1.setEmployeeDetails(companyName,employee_id);

    dev1.setDeveloperDetails(dept_name,devExperience);

    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
}
