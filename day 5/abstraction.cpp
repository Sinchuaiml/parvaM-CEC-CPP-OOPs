#include<iostream>
using namespace std;

class Bike{
    public:
        string brand,model,engine_type;
        int year, price;

    void injectedFule(){
        cout<<"injected the fule - petro !"<<endl;
    }

    void igniteFule(){
        cout<<"ignite the fule!"<<endl;
    }

    void start(string bikeModel){
        injectedFule();
        igniteFule();
        cout<< model <<"started, happy journey!";
    }

    void stopAcceleration(){
        cout<<"acceleration Stopped!"<<endl;
    }

    void stopFuleFlow(){
        cout<<"stopping the fule"<<endl;
    }

    void stop(){
        stopAcceleration();
        stopFuleFlow();
        cout<< model <<"stopped, lock the vehicle!"<<endl;
    }
};

int main(){
    Bike bike1;
    bike1.brand="Bajaj";
    bike1.model="pulsar NS125";
    bike1.engine_type="BS6";
    bike1.year=2022;
    bike1.price=1500000;
    bike1.start(bike1.model);
    bike1.stop();
}