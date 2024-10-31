#include <iostream>
#include<string>

using namespace std;

//base class
class Shape {
//using protected to be accessed by derived class 
protected:
string color;

public:
//constructor to initialize color
Shape(string c) : color(c) {}

};

//derived class 
class Rectangle : public Shape {

private :
float length, width;

public:

Rectangle (float l, float w, string c) : Shape(c), length (l), width (w) {}

//initialize length and width 
void setLength(float l) {
  length = l;
  }
  
  void setWidth(float w) {
    width = w;
    }
  
string getcolor() {
 return color;
 }
 
 double area() {
 return length * width;
 }
 
 // getter methods of length and width 
 float getlength() {
  return length;
  }
  
  float getwidth() {
  return width;
  }
  
  void display () {
  cout << "Rectangle color"<<color<< endl;
  cout << "Length"<<length << endl;
  cout << "Width"<<width << endl;
  }
  
  };
  
  int main() {
  
  Rectangle rectangle1(9.4, 4.5, "green");
  
  cout <<"Length"<<rectangle1.getlength()<< endl;
  cout <<"Width"<<rectangle1.getwidth()<< endl;
  cout <<"the area is"<<rectangle1.area() << endl;
  
  
    return 0;
    }