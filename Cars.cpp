//program to show details of the car
#include <iostream>
#include<string>
using namespace std;

//base class
class Car {
 //data members
 private:
 string brand;
 string model;
 float price;
 int mileage;
 
 public:
 // constructor to initialize brand, model, price,mileage
 Car(string carBrand, string carModel, float carPrice, int carMileage) :
 brand(carBrand), model(carModel), price(carPrice), mileage(carMileage) {}
 
 //member function 
 void setbrand(string b) {
  brand = b;
  }
  void setmodel(string m) {
   model = m; 
   }
   void setprice(float p) {
    price = p;
    }
    void setmileage(int m) {
     mileage = m;
     }
     
     void drive(int distance) {
     mileage += distance; // increases mileage by that amount and display the updated mileage
     
     cout<<"Updated Mileage:"<<mileage<<"miles"<<endl;
     }
  void displayinfo() {
  cout<<"Brand: "<<brand<<endl;
  cout<<"Model: "<<model<<endl;
  cout<<"Price: "<<price<<endl;
 cout<<"Current Mileage: "<<mileage<<"miles"<<endl;
 }
 };
 
 int main() {
 // create car object 
  Car myCar("Toyota", "Corolla", 20000.0, 5000);
  myCar.drive(150); //drive 150 miles
  myCar.drive(300); //drive 300 miles 
  
  //display car details
  myCar.displayinfo();
  
  return 0;
  }