#include<iostream>
#include<string>

using namespace std;

string Grade(int score) {
   
    if (score >= 90 && score <= 100) {
        return "A"; 
    } else if (score >= 80 && score < 90) {
        return "B"; 
    } else if (score >= 70 && score < 80) {
        return "C"; 
    } else if (score >= 60 && score < 70) {
        return "D"; 
    } else if (score < 60 && score >= 0) {
        return "F"; 
    } else {
        return "Invalid score"; // Handle invalid input
    }
}

int main() {
    int score;
   
    cout << "Enter the student's score (0-100): ";
    cin >> score;

 
    string grade = Grade(score);
    cout << "The student's grade is: " << grade << std::endl;

    return 0;
}




