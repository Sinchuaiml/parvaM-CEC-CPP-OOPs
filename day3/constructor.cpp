#include<iostream>
using namespace std;
class Calculate{
    public:
         int num1, num2;
         float res;

         Calculate(){
              num1 = 5;
              num2 = 10;

         }

         void showOutput(){
            cout << "Addition:" << num1 + num2 << endl;
            cout << "Subtraction:" << num1 - num2 << endl;
            cout << "Multiplication:" << num1 * num2 << endl;
            cout << "Quotient:" << num1 / num2 << endl;
            cout << "Remainder:" << num1 % num2 << endl; 
         }
};

int main(){
    Calculate c1;
    Calculate c2;
    c1.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();
}