#include<iostream>
using namespace std;

class car{
    //date
    public:
    string brand,model,variant,fule_type;
    int year;
    float price;

    void start(){
        cout<<model<<"started!"<<endl;


    }

    void park(){
         cout<<model<<"parked!"<<endl;
    }
    void stop(){
         cout<<model<<"stopped!"<<endl;


    }
    void display(){
        cout<< "Brand:"<< brand << endl;
        cout<<"model:"<<model<< endl;
        cout<<"variable:"<<variant<< endl;
        cout<<"fuel type:"<<fule_type<<endl;
        cout<<"launch year:"<<year<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main(){
    car c1;
    c1.brand = "toyato";
    c1.model = "Innova";
    c1.variant = "6 Seater";
    c1.fule_type = "diesel";
    c1.year = 204;
    c1.price = 15,000,00;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}