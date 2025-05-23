#include<iostream>
using namespace std;
class customer{
    public:
        string firstName, lastName;
        int age,rating;
        customer(){
            firstName = "sinchana";
            lastName = "suma";
            age = 19;
            rating = 5;
        }
        void showDetails(){
            cout<<"customer Name:"<<firstName<<""<<lastName<<endl;
            cout<<"customer Age:"<<age<<endl;
        }
        void giveRating (int rate);

        void showRating(){
            cout<<"you've given "<< rating <<"star rating.thankyou!"<<endl;
        }
        
};
void customer :: giveRating(int rate){
    rating = rate;
}
int main(){
    customer cust1;

    cust1.showDetails();
    cust1.showRating();

    customer cust2;

    cust2.firstName="rohit";
    cust2.lastName="sharma";
    cust2.age=30;

    int starRating;

    cout<<"give your rating(0 to 5):";
    cin>>starRating;
    cust2.giveRating(starRating);
    cust2.showRating();

}