#include <iostream>
#include<string>

using namespace std;

//base class

class Shape {

protected:
string color;

public:
void setcolor(string c) {
 color = c;
 }
 
 string getcolor() {
  return color;
  }
  
  };
  
  //derived class
  class Circle : public Shape {
  
  public:
  string wctype;
  void settype (string tp) {
   wctype = tp;
   }
  
  void displayinfo() {
  cout << "I am a"<< wctype << endl;
  cout << "my color is"<< color << endl;
  }
  
  };
  
  int main() {
  // create an object of the circle class
  
  Circle circle1;
  //calling members of the base class
  circle1.setcolor("yellow");
  
  //calling members of the derived class
  circle1.settype("circle");
  circle1.displayinfo();
  
  return 0;
  }