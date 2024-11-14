//program to give details about a movie
#include <iostream>
#include <string>
using namespace std;

class Movie {

private:
//data members
string title, director;
int duration;
float rating;

public:
//constructor to accept title, director, duration, rating 
Movie(string movieTitle, string movieDirector, int movieDuration, float movieRating) : 
title(movieTitle), director(movieDirector), duration(movieDuration), rating(movieRating) {}

//member function 
void settitle(string t){
 title = t;
 }
 
 void setdirector(string di) { 
  director = di;
  }
  
  void setduration(int du) {
   duration = du;
   }
   
   void setrating(float r) {
   rating = r;
   }
   
   void rateMovie(float newRating) {
    if(newRating>=1.0 && newRating<=5.0) {
     rating = newRating; // updating the rating 
     cout<<"Rating for \""<<title<<"\" updated to" <<rating<< std::endl;
     } 
     else {
     std::cout<<"invalid rating"<<std::endl;
     }
     
     }
   //display movie details 
   void display() {
   cout<<"Movie"<<title<<endl;
   cout<<"Director"<<director<<endl;
   cout<<"Duration"<<duration << endl;
   cout<<"Rating"<<rating<<endl;
   }
   
   };
   
   int main() {
   Movie mymovie("Inception", "Christopher Nolan", 148, 4.8);
   //display movie details 
   //optionally, you can rate the movie again
   mymovie.rateMovie(2.0); //valid rating 
   mymovie.display();
   
   mymovie.rateMovie(6.0);// invalid rating 
   
   return 0;
   }