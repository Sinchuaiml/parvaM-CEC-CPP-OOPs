#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;

    public:
        string pizzaType, size;
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout << "Order the pizza by selecting your favorite pizza!" << endl;
        }

        void bookPizza(){
            cout << "Booking Pizza!" << endl;
        }
        void bakePizza(string type, string pizzasize){
            pizzaType = type;
            size = pizzasize;
            cout << "Pizza Type:" << pizzaType << ",size " << size << endl;
        }
        
        void addIngredient(string secret){
            secretIngredient = secret;
        }

        void confirmOrder(){
            cout << "Order confirmed!" << endl;
        }

        bool checkPayment(int money, bool payment){
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone == true){
                cout << "Amount Paid: Rs." << price << ",Payment successful" << endl;
                confirmOrder();
                bookPizza();
                return true;
        }else{
            cout << "Amount Paid: Rs." << price << ",Payment pending" << endl;
            return false;
        }
    }
        void servePizza(int amount, bool paid, string typeofPizza, string sizeOfPizza, string secretItem){
            if (!checkPayment(amount, paid)){
                cout << "Order cancelled due to the pending payment!" << endl;
                return ;
            }
            bakePizza(typeofPizza, sizeOfPizza);
            addIngredient(secretItem);
            cout << "Pizza served! Enjoy your Pizza";
        }
};

int main(){
    string pizType, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout << "enter the Pizza Type (Veg/Non-Veg},size (Regular/Medium/Large):";
    cin >> pizType >> size;

    pizzaAmount = 399;
    cout << "Did they pay the amount(Type '1' if paid/Type '0' if not paid):";
    cin >> amountPaid;

    customer1.servePizza(pizzaAmount, amountPaid, pizType, size, secretIng);
}