#include<iostream>
using namespace std;

class Teacher{
    private:// by default all the members of the class comes under private access specifier
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher(){ // Default constructor
            branch="AIML";
            name="John Doe";
            qualification="M.Tech";
            experience=5;   
            cout<<"welcome, John Doe!"<<endl;
        }

         void setData(string Tname,string Tbranch,string Tqual, int exp){
            name = Tname;
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName,string Teacherbranch,string Teacherqual, int Teacherexp ){// Parameterized constructor
            setData(TeacherName,Teacherbranch,Teacherqual,Teacherexp);
            cout<<"welcome "<<"to "<<branch<<",";
            cout<<"You've graduated with , "<<qualification<<"degree, and you've"<<experience<<"years of experience"<<endl;
        }
        Teacher(Teacher &t){
            name=t.name;
            branch=t.branch;
            qualification=t.qualification;
            experience=t.experience;
        }

        void getData(){
            cout<<"welcome "<<"to "<<branch<<",";
            cout<<"You've graduated with , "<<qualification<<"degree, and you've"<<experience<<"years of experience"<<endl;
        }
};

int main(){
    string n, q, b;
    int e;
    
    Teacher teacher1;// object created & invoked the default constructor

    cout<<"enter your name, qualification, branch & experience:";
    cin>> n>> q>> b>>e;

    Teacher teacher2(n, q ,b,e);

    Teacher teacher3 = teacher2;
    teacher3.getData();
}