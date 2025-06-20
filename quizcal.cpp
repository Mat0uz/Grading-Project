#include<iostream>
//#include<string>
using namespace std;

int main()
{
	float q1;
	float q2;
	float q3;
	float q4;

	cout << "Please enter four quiz result to get final score\n";
	cout << "Enter score for quiz one: ";
	cin >> q1;
	cout << "Enter score for quiz two: ";
	cin >> q2;
	cout << "Enter score for quiz three: ";
	cin >> q3;
	cout << "Enter score for quiz four: ";
	cin >> q4;

	float lowest;

	if(q1 <= q2 && q1 <= q3 && q1 <= q4)
		lowest = q1;
	else if(q2 <= q1 && q2 <= q3 && q2 <= q4)
		lowest = q2;
	else if(q3 <= q1 && q3 <= q2 && q3 <= q4)
		lowest = q3;
	else
		lowest = q4;

	float totalAverage = (q1 + q2 + q3 + q4 - lowest) / 3;

	cout << "Your average is " << totalAverage << "%" << endl;

	return 0;
}
