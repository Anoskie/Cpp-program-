//program to show details of the car
#include <iostream>
#include<string>
using namespace std;

//base class
class Person {
 //data members
 protected:
 string name;
 
 public:
 // constructor to initialize name
 Person (string n) : name(n) {}
 
 //member function 
 void setname(string n) {
  name = n;
  }
  
  string getname() {
   return name;
   }
   };
   //derived class 
   class Student : public Person {
   protected:
   int studentID;
   
   public:
   //constructor to initialize name and student ID
    Student (string personName, int personStudentID) :
    Person (personName), studentID(personStudentID) {}
    
    
  void setstudentID(int s) {
   studentID = s; 
   }
   
   int getstudentID() {
    return studentID;
    }
  void displayinfo() {
  cout<<"Name: "<<getname()<<endl;
  cout<<"StudentID: "<<getstudentID()<<endl;
 }
 
 };
 
 //derived class 
 class GraduateStudent : public Student {
 private:
 string researchTopic;
 public:
  //constructor to initialize 
   GraduateStudent(string studentName, int studentStudentID, string studentResearchTopic) :
    Student (studentName, studentStudentID), researchTopic(studentResearchTopic) {}
    
    string getresearchTopic() {
     return researchTopic;
     }
     
     void displayinfo() {
     cout<<"Name:"<<name<<endl;
     cout << "StudentID: " <<studentID<<endl;
     cout << "ResearchTopic:" <<researchTopic<<endl;
   }
   };
 
 int main() {
 // create student object 
  Student myStudent("John", 1001);
   // create a Graduate student object 
   GraduateStudent myGraduateStudent("Alice", 2001, "Artificial Intelligence");
   
  
  //display student details
  myStudent.displayinfo();
  myGraduateStudent.displayinfo();
  
  return 0;
  }