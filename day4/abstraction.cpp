#include<iostream>
using namespace std;

class Bike{
    public:
        string brand, model, engine_type;
        int year, price;

    void injectFuel(){
        cout << "Ignite the Fuel - petrol!" << endl;
    }

    void igniteFuel(){
        cout << "Ignite the Fuel!" << endl;
    }

    void start(string bikeModel){
        injectFuel();
        igniteFuel();
        cout << model << "started, Happy Journary!" << endl;
    }

    void stopAcceleration(){
        cout << "Acceleration stopped!" << endl;
    }

    void stopFuelFlow(){
        cout << "stopping the Fuel" << endl;
    }

    void stop(){
        stopAcceleration();
        stopFuelFlow();
        cout << model << "stopped, lock the vehicle!";
    }
};

int main(){
    Bike bike1;
    bike1.brand = "Bajaj";
    bike1.model = "Pulsar NS125";
    bike1.engine_type = "BS6";
    bike1.year = 2022;
    bike1.price = 150000;
    bike1.start(bike1.model);
    bike1.stop();
}