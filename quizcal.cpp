#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for name and quiz scores
    string name;
    string format;
    float quiz1, quiz2, quiz3, quiz4;
    float lowest;

    // Get user input

    cout << "Welcome to CSC 126 quiz average calculator!\n"
    << "This program adds up 4 quiz scores and removes the lowest from the final grade\n" <<
    "Please enter student's name to begin: ";
    cin >> name;
    cout << "Are the grades in percentage or 10-points format?(enter percent or points): ";
    cin >> format;
    
    //Invalid input loop for selecting format
    
    while (format != "percent" && format != "points")
    {
          cout << "Invalid input!\n" << "Enter percent or points: ";
          cin >> format;
    }
    
    cout << "Enter all four quiz scores(separated by spaces): ";
    cin >> quiz1 >> quiz2 >> quiz3 >> quiz4;
    
    //Invalid input loop for grades
    
    if (format == "points")
        while (quiz1 > 10 || quiz1 < 0 || quiz2 > 10 || quiz2 < 0 || quiz3 > 10 || quiz3 < 0 || quiz4 > 10 || quiz4 < 0)
        {
            cout << "Invalid Input!\n" << "Separate scores with spaces(Ex. 10 5.5 9 7): ";   
            cin >> quiz1 >> quiz2 >> quiz3 >> quiz4;
        }
    else 
         while (quiz1 > 100 && quiz1 < 0 && quiz2 > 100 && quiz2 < 0 && quiz3 > 100 && quiz3 < 0 && quiz4 > 100 && quiz4 < 0)
        {
            cout << "Invalid Input!\n" << "Separate scores with spaces(Ex. 100 55.5 90 77): ";   
            cin >> quiz1 >> quiz2 >> quiz3 >> quiz4;
        }
     
    // Determine the lowest score
    if (quiz1 <= quiz2 && quiz1 <= quiz3 && quiz1 <= quiz4)
        lowest = quiz1;
    else if (quiz2 <= quiz1 && quiz2 <= quiz3 && quiz2 <= quiz4)
        lowest = quiz2;
    else if (quiz3 <= quiz1 && quiz3 <= quiz2 && quiz3 <= quiz4)
        lowest = quiz3;
    else
        lowest = quiz4;

    // Calculates average after dropping the lowest score
    float average = (quiz1 + quiz2 + quiz3 + quiz4 - lowest) / 3;

    //Determines letter grade
    string letterGrade;
    string quizLetterGrade1, quizLetterGrade2, quizLetterGrade3, quizLetterGrade4;

    if (format == "percent") //quiz 1 letter grade
    {
        if (quiz1 >= 90)
            quizLetterGrade1 = "A";
        else if (quiz1 <= 89 && quiz1 >= 88)
            quizLetterGrade1 = "A-";
        else if (quiz1 <= 87 && quiz1 >= 86 )
            quizLetterGrade1 = "B+";
        else if (quiz1 <= 85 && quiz1 >= 80)
            quizLetterGrade1 = "B";
        else if (quiz1 <= 79 && quiz1 >= 78)
            quizLetterGrade1 = "B-";
        else if (quiz1 <= 77 && quiz1 >= 76)
            quizLetterGrade1 = "C+";
        else if (quiz1 <= 75 && quiz1 >= 70)
            quizLetterGrade1 = "C";
        else if (quiz1 <= 70 && quiz1 >= 60)
            quizLetterGrade1 = "D";
        else
            quizLetterGrade1 = "F";
    }
    else
    {
      if (quiz1 >= 9)
            quizLetterGrade1 = "A";
        else if (quiz1 <= 8.9 && quiz1 >= 8.8)
            quizLetterGrade1 = "A-";
        else if (quiz1 <= 8.7 && quiz1 >= 8.6 )
            quizLetterGrade1 = "B+";
        else if (quiz1 <= 8.5 && quiz1 >= 8)
            quizLetterGrade1 = "B";
        else if (quiz1 <= 7.9 && quiz1 >= 7.8)
            quizLetterGrade1 = "B-";
        else if (quiz1 <= 7.7 && quiz1 >= 7.6)
            quizLetterGrade1 = "C+";
        else if (quiz1 <= 7.5 && quiz1 >= 7)
            quizLetterGrade1 = "C";
        else if (quiz1 <= 7 && quiz1 >= 6)
            quizLetterGrade1 = "D";
        else
            quizLetterGrade1 = "F";
    }

    if (format == "percent") //quiz 2 letter grade
    {
        if (quiz2 >= 90)
            quizLetterGrade2 = "A";
        else if (quiz2 <= 89 && quiz2 >= 88)
            quizLetterGrade2 = "A-";
        else if (quiz2 <= 87 && quiz2 >= 86 )
            quizLetterGrade2 = "B+";
        else if (quiz2 <= 85 && quiz2 >= 80)
            quizLetterGrade2 = "B";
        else if (quiz2 <= 79 && quiz2 >= 78)
            quizLetterGrade2 = "B-";
        else if (quiz2 <= 77 && quiz2 >= 76)
            quizLetterGrade2 = "C+";
        else if (quiz2 <= 75 && quiz2 >= 70)
            quizLetterGrade2 = "C";
        else if (quiz2 <= 70 && quiz2 >= 60)
            quizLetterGrade2 = "D";
        else
            quizLetterGrade2 = "F";
    }
    else
    {
      if (quiz2 >= 9)
            quizLetterGrade2 = "A";
        else if (quiz2 <= 8.9 && quiz2 >= 8.8)
            quizLetterGrade2 = "A-";
        else if (quiz2 <= 8.7 && quiz2 >= 8.6 )
            quizLetterGrade2 = "B+";
        else if (quiz2 <= 8.5 && quiz2 >= 8)
            quizLetterGrade2 = "B";
        else if (quiz2 <= 7.9 && quiz2 >= 7.8)
            quizLetterGrade2 = "B-";
        else if (quiz2 <= 7.7 && quiz2 >= 7.6)
            quizLetterGrade2 = "C+";
        else if (quiz2 <= 7.5 && quiz2 >= 7)
            quizLetterGrade2 = "C";
        else if (quiz2 <= 7 && quiz2 >= 6)
            quizLetterGrade2 = "D";
        else
            quizLetterGrade2 = "F";
    }

     if (format == "percent") //quiz 3 letter grade
    {
        if (quiz3 >= 90)
            quizLetterGrade3 = "A";
        else if (quiz3 <= 89 && quiz3 >= 88)
            quizLetterGrade3 = "A-";
        else if (quiz3 <= 87 && quiz3 >= 86 )
            quizLetterGrade3 = "B+";
        else if (quiz3 <= 85 && quiz3 >= 80)
            quizLetterGrade3 = "B";
        else if (quiz3 <= 79 && quiz3 >= 78)
            quizLetterGrade3 = "B-";
        else if (quiz3 <= 77 && quiz3 >= 76)
            quizLetterGrade3 = "C+";
        else if (quiz3 <= 75 && quiz3 >= 70)
            quizLetterGrade3 = "C";
        else if (quiz3 <= 70 && quiz3 >= 60)
            quizLetterGrade3 = "D";
        else
            quizLetterGrade3 = "F";
    }
    else
    {
      if (quiz3 >= 9)
            quizLetterGrade3 = "A";
        else if (quiz3 <= 8.9 && quiz3 >= 8.8)
            quizLetterGrade3 = "A-";
        else if (quiz3 <= 8.7 && quiz3 >= 8.6 )
            quizLetterGrade3 = "B+";
        else if (quiz3 <= 8.5 && quiz3 >= 8)
            quizLetterGrade3 = "B";
        else if (quiz3 <= 7.9 && quiz3 >= 7.8)
            quizLetterGrade3 = "B-";
        else if (quiz3 <= 7.7 && quiz3 >= 7.6)
            quizLetterGrade3 = "C+";
        else if (quiz3 <= 7.5 && quiz3 >= 7)
            quizLetterGrade3 = "C";
        else if (quiz3 <= 7 && quiz3 >= 6)
            quizLetterGrade3 = "D";
        else
            quizLetterGrade3 = "F";
    }

    if (format == "percent") //quiz 4 letter grade
    {
        if (quiz4 >= 90)
            quizLetterGrade4 = "A";
        else if (quiz4 <= 89 && quiz4 >= 88)
            quizLetterGrade4 = "A-";
        else if (quiz4 <= 87 && quiz4 >= 86 )
            quizLetterGrade4 = "B+";
        else if (quiz4 <= 85 && quiz4 >= 80)
            quizLetterGrade4 = "B";
        else if (quiz4 <= 79 && quiz4 >= 78)
            quizLetterGrade4 = "B-";
        else if (quiz4 <= 77 && quiz4 >= 76)
            quizLetterGrade4 = "C+";
        else if (quiz4 <= 75 && quiz4 >= 70)
            quizLetterGrade4 = "C";
        else if (quiz4 <= 70 && quiz4 >= 60)
            quizLetterGrade4 = "D";
        else
            quizLetterGrade4 = "F";
    }
    else
    {
      if (quiz4 >= 9)
            quizLetterGrade4 = "A";
        else if (quiz4 <= 8.9 && quiz4 >= 8.8)
            quizLetterGrade4 = "A-";
        else if (quiz4 <= 8.7 && quiz4 >= 8.6 )
            quizLetterGrade4 = "B+";
        else if (quiz4 <= 8.5 && quiz4 >= 8)
            quizLetterGrade4 = "B";
        else if (quiz4 <= 7.9 && quiz4 >= 7.8)
            quizLetterGrade4 = "B-";
        else if (quiz4 <= 7.7 && quiz4 >= 7.6)
            quizLetterGrade4 = "C+";
        else if (quiz4 <= 7.5 && quiz4 >= 7)
            quizLetterGrade4 = "C";
        else if (quiz4 <= 7 && quiz4 >= 6)
            quizLetterGrade4 = "D";
        else
            quizLetterGrade4 = "F";
    }

    if (format == "percent") //total letter grade
    {
        if (average >= 90)
            letterGrade = "A";
        else if (average <= 89 && average >= 88)
            letterGrade = "A-";
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
            letterGrade = "F";
    }
    else
    {
        if (average >= 9)
            letterGrade = "A";
        else if (average <= 8.9 && average >= 8.8)
            letterGrade = "A-";
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
            letterGrade = "F";
    }

    //display output
    cout << left;

    if (format == "points")
    {
        cout << "Students name: " << name << endl;
        cout << setw(15) << "Grade Item" << setw(15) << "Grade" << setw(15) << "Points" << endl << endl;
        cout << setw(15) << "Quiz 1" << setw(15) << quizLetterGrade1 << quiz1 << "/10" << endl;
        cout << setw(15) << "Quiz 2" << setw(15) << quizLetterGrade2 << quiz2 << "/10" << endl;
        cout << setw(15) << "Quiz 3" << setw(15) << quizLetterGrade3 << quiz3 << "/10" << endl;
        cout << setw(15) << "Quiz 4" << setw(15) << quizLetterGrade4 << quiz4 << "/10" << endl << endl;
        cout << setw(15) << "Final Grade" << setw(15) << letterGrade << fixed << setprecision(1) << average
        << "/10" << endl;
    }
    else
    {
        cout << "Students name: " << name << endl;
        cout << setw(15) << "Grade Item" << setw(15) << "Grade" << setw(15) << "Percentage" << endl << endl;
        cout << setw(15) << "Quiz 1" << setw(15) << quizLetterGrade1 << quiz1 << "%" << endl;
        cout << setw(15) << "Quiz 2" << setw(15) << quizLetterGrade2 << quiz2 << "%" << endl;
        cout << setw(15) << "Quiz 3" << setw(15) << quizLetterGrade3 << quiz3 << "%" << endl;
        cout << setw(15) << "Quiz 4" << setw(15) << quizLetterGrade4 << quiz4 << "%" << endl << endl;
        cout << setw(15) << "Final Grade" << setw(15) <<letterGrade << fixed << setprecision(1) << average
        << "%" << endl;
    }

    return 0;
}
