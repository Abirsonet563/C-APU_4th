1. Complete the following program skeleton. When finished, the program will ask the user 
for a length (in inches), convert that value to centimeters and display result. You are to 
write the function convert.

#include <iostream>
#include <iomanip>

using namespace std;

double convert(double* inches) {
double centimeters = *inches * 2.54;
return centimeters;
}

int main() {
double measurement;
cout << "Enter a length in inches, and I will convert\n";
cout << "it to centimeters: ";
cin >> measurement;
measurement = convert(&measurement);
cout << fixed << setprecision(4);
cout << "Value in centimeters: " << measurement << endl;
return 0;
}

2. Write a program that will ask the user to enter the width and length of a rectangle, and 
then display the rectangle’s area. The program calls the following functions:
 getLength – this function should ask the user to enter the rectangle’s length, and then 
return that value as a double.
 getWidth – this function should ask the user to enter the rectangle’s width, and then 
return that value as a double.
 getArea – this function should accept the rectangle’s length and width as arguments, 
and return the rectangle’s area. The area is calculated by multiplying the length by the 
width.
 displayData - this function should accept the rectangle’s length, width, and area as 
reference arguments, and display them in an appropriate message on the screen.

#include <iostream>
#include <iomanip>

using namespace std;

double getLength() {
double length;
cout << "Enter the rectangle's length: ";
cin >> length;
return length;
}

double getWidth() {
double width;
cout << "Enter the rectangle's width: ";
cin >> width;
return width;
}

double getArea(double length, double width) {
return length * width;
}

void displayData(double& length, double& width, double& area) {
cout << fixed << setprecision(2);
cout << "Rectangle's length: " << length << endl;
cout << "Rectangle's width: " << width << endl;
cout << "Rectangle's area: " << area << endl;
}

int main() {
double length = getLength();
double width = getWidth();
double area = getArea(length, width);
displayData(length, width, area);
return 0;
}

3.  Write a program that accept an integer argument indicating the total number of subjects 
and the test scores are stored in a dynamically allocated array. The program calls the 
following functions:
 calcAverage – this function should accept an array argument to calculate the average 
of the test scores.
 findLowest – this function should find and return the lowest of test scores array 
passed to it.
Input validation: Do not accept a negative number

#include <iostream>
#include <iomanip>

using namespace std;

double calcAverage(int* scores, int numSubjects) {
double sum = 0;
for (int i = 0; i < numSubjects; i++) {
sum += scores[i];
}
return sum / numSubjects;
}

int findLowest(int* scores, int numSubjects) {
int lowest = scores[0];
for (int i = 1; i < numSubjects; i++) {
if (scores[i] < lowest) {
lowest = scores[i];
}
}
return lowest;
}

int main() {
int numSubjects;
cout << "Enter the number of subjects: ";
cin >> numSubjects;

// input validation: do not accept a negative number
while (numSubjects < 0) {
cout << "Invalid input. Please enter a positive number: ";
cin >> numSubjects;
}

int* scores = new int[numSubjects];
for (int i = 0; i < numSubjects; i++) {
cout << "Enter the score for subject " << i + 1 << ": ";
cin >> scores[i];
}

double average = calcAverage(scores, numSubjects);
int lowest = findLowest(scores, numSubjects);
cout << fixed << setprecision(2);
cout << "Average score: " << average << endl;
cout << "Lowest score: " << lowest << endl;

delete[] scores;
return 0;
}

4. Write a program that grades the written portion of the driver’s license exam. The exam has 20 
multiple choice questions. Here are the correct answers:
1. B 6. A 11. B 16. C
2. D 7. B 12. C 17. C
3. A 8. A 13. D 18. B
4. A 9. C 14. A 19. D
5. C 10. D 15. D 20. A
Your program should store the correct answers shown above in an array. It should ask the 
user to enter the answers for each of the 20 questions, and the answers should be stored in 
another array. After the student’s answers have been entered, the program should have a 
function to display a message indicating whether the student passed or failed the exam. 
(Note: A student must correctly answer 15 of the 20 questions to pass the exam.)
Input validation: Only accept the letters A, B, C, or D as answers

