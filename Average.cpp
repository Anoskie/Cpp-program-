//calculate the average 
#include <iostream>

using namespace std;

int main() {
    //Declaring variables 
    int score1, score2, score3, average;
    
    
    cout << "Enter marks for score1: ";
    cin >> score1;
    
    cout << "Enter marks for score2: ";
    cin >> score2;
    
    cout << "Enter marks for score3: ";
    cin >> score3;
    
    //Calculating the average
    average = (score1 + score2 + score3) / 3;
    
    //Using switch statement to determine the average grade
    switch (average) {
        case 70 ... 100:
            cout << "Grade: A";
            break;
        case 60 ... 69:
            cout << "Grade: B";
            break;
        case 50 ... 59:
            cout << "Grade: C";
            break;
        case 40 ... 49:
            cout << "Grade: D";
            break;
        case 0 ... 39:
            cout << "FAIL";
            break;
        default:
            cout << "Enter valid marks";
    }
    
    
    return 0;
}