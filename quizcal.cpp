#include <iostream>
#include <string>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    // Declare variables for name and quiz scores
    string name;
    string format;
    float quiz1, quiz2, quiz3, quiz4;
    float lowest;
    
    // Get user input
    cout << "Students name: ";
    cin >> name;
    cout << "Are the grades in precentage or 10-points format?(enter percent or points):";
    cin >> format;
    cout << "Examples of entered grades.\n" << "Precentage: 80.5 99 100 0\n" 
         << "Points: 5 9.3 9 10\n" << "Enter all four quiz grades in (separated by spaces): ";
    cin >> quiz1 >> quiz2 >> quiz3 >> quiz4;

    // Determine the lowest score
    if (quiz1 <= quiz2 && quiz1 <= quiz3 && quiz1 <= quiz4) 
        lowest = quiz1;
    else if (quiz2 <= quiz1 && quiz2 <= quiz3 && quiz2 <= quiz4) 
        lowest = quiz2;
    else if (quiz3 <= quiz1 && quiz3 <= quiz2 && quiz3 <= quiz4) 
        lowest = quiz3;
    else
        lowest = quiz4;

    // Calculate average after dropping the lowest score
    float average = (quiz1 + quiz2 + quiz3 + quiz4 - lowest) / 3;

    //Determine letter grade
    string letterGrade;

    if (format == "precent"){
        if (average >= 90)
            letterGrade = "A";
        else if (average <= 89 && average >= 88)
            letterGrade = "A-"
        else if (average <= 87 && average >= 86 )
            letterGrade = "B+";
        else if (average <= 85 && average >= 80)
            letterGrade = "B";
        else if (average <= 79 && average >= 78)
            letterGrade = "B-";
        else if (average <= 77 && average >= 76)
            letterGrade = "C+";
        else if (average <= 75 && average >= 70)
            letterGrade = "C";
        else if (average <= 70 && average >= 60)
            letterGrade = "D";
        else
            letterGrade = "F";}
    else {
        if (average >= 9)
            letterGrade = "A";
        else if (average <= 8.9 && average >= 8.8)
            letterGrade = "A-"
        else if (average <= 8.7 && average >= 8.6 )
            letterGrade = "B+";
        else if (average <= 8.5 && average >= 8)
            letterGrade = "B";
        else if (average <= 7.9 && average >= 7.8)
            letterGrade = "B-";
        else if (average <= 7.7 && average >= 7.6)
            letterGrade = "C+";
        else if (average <= 7.5 && average >= 7)
            letterGrade = "C";
        else if (average <= 7 && average >= 6)
            letterGrade = "D";
        else
            letterGrade = "F";}
     
    
    // Format and display output
    cout << fixed << setprecision(1); // Show 1 decimal places

    cout << "Student Name: " << name << endl;
    cout << "Average (Top 3 Quizzes): " << average << "%\n";
    cout << "Lowest graded removed from average: " << lowest << "%\n";
    
    return 0;
}
