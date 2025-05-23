#include<iostream>
using namespace std;

class company{
    private:
        string cin;
        int totalworth;
    public:
        string gstNum,location;
        int numofEmp;
 
        //setter method
        void setDetails(string cinNum, int worth){
            cin = cinNum;
            totalworth = worth;
        }

        //getter method
        void getDetails(string gstNumber){
            cout << "corporate identity Number:" << cin << endl;
            cout << "total worth of the company:" << totalworth << endl;
        }

        void getBasicDetails();
};
 void company:: getBasicDetails(){
    cout << "GST Number:" << gstNum <<endl;
    cout << "location:" << location <<endl;
    cout << "Number of Employees:" << numofEmp <<endl;
 }

 int main(){
    company comp1;
    comp1.gstNum = "12345ABCD678";
    comp1.location= "Bengaluru";
    comp1.numofEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyworth;

    cinNumber = "98764AR123";
    companyworth = 5000000;

    comp1.setDetails(cinNumber, companyworth);
    comp1.getDetails("comp1.gstNum");
 }