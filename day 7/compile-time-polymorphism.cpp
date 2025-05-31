#include<iostream>
using namespace std;

class calculate{
    public:
        int result;

        int sum(int num){
            result=num+num;
            return result;
        }

        int sum(int num1, int num2){
            result = num1+num2;
            return result;
        }

        int sum(float n1, float n2){
            float(result)=n1 +n2;
            return result;
        }
};

int main(){
    int number1, number2;
    float decimal1,decimal2;

    cout<<"enter any two integers:";
    cin>>number1>>number2;

    cout<<"enter any two decimal numbers:";
    cin>>decimal1>>decimal2;

    calculate cal1;
    cout<<"adding the number itself:"<<cal1.sum(number1)<<endl;
    cout<<"addition of 2 integers:"<<cal1.sum(number1,number2)<<endl;
    cout<<"addition of 2 decimals:"<<cal1.sum(decimal1,decimal2)<<endl;

}