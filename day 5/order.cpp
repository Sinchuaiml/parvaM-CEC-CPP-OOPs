#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredients;
    public:
        string pizzaType, size;
        int price;
        bool isPaymethodDone;

        void orderPizza(){
            cout<<"order the pizza by selecting your favorite pizza:"<<endl;
        }
        void bookPizza(){
            cout<<"booking pizza!"<<endl;
        }

        void bakePizza( string type,string pizzaSize){
            pizzaType= type;
            size = pizzaSize;
            cout<<"Pizza type:"<<pizzaType<<endl;
        }

        void addIngredients(string secret){
            secretIngredients = secret;
        }

        void confirmOrder(){
            cout<<"order confirmed!"<<endl;
        }

        bool checkPayment(int money, bool payment){
            price = money;
            isPaymethodDone= payment;
            if(isPaymethodDone){
                cout<<"amount paid:RS."<<money <<", payment successful!"<<endl;
                confirmOrder();
                bookPizza();
                return true;
            }else{
                cout<<"amount due:RS."<<money <<", payment pending!"<<endl;
                return false;
            }
        }

        void servePizza(int amount, bool paid, string typeOfPizza,string sizeOfPizza,string secretitem){
            if(!checkPayment(amount,paid)){
                cout<<"order cancelled due to the pending payment!"<<endl;
                return;
            }
            bakePizza(typeOfPizza, sizeOfPizza);
            addIngredients(secretitem);
            cout<<"pizza served! enjoy your pizza";
        }
};
int main(){
    string pizType, size, secretIng;  
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout<<"enter  the Pizza type (veg/non-veg), size (regular/medium/large):";
    cin>>pizType>>size;

    pizzaAmount = 399;
    cout<<"did they pay the amount(type '1' if paid/ type '0' if not paid):";
    cin>>amountPaid;

    customer1.servePizza(pizzaAmount,amountPaid,pizType,size, secretIng);
}