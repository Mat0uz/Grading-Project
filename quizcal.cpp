#include <iostream>
#include <string>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    // Declare variables for name and quiz scores
    string name;
    float quiz1, quiz2, quiz3, quiz4;
    float lowest;

    // Get user input
    cout << "Students name: ";
    cin >> name;

    cout << "Enter all four quiz grades in (separated by spaces Ex.95.50 90 78.6 65): ";
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
        
    // Format and display output
    cout << fixed << setprecision(2); // Show 2 decimal places

    cout << "Student Name: " << name << endl;
    cout << "Average (Top 3 Quizzes): " << average << "%\n";
    cout << "Lowest graded removed from average: " << lowest << "%\n";
        
    return 0;
}
