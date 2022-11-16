//Q.1 Write  a  program  to  get  an  inputword  from a  user. Then,  display  the  given  word together with the sentence of “Hello World” as below.
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

//main function
int main() {
    // count is a function that writes to the console output
    cout<< "Hello World" <<endl;
    
    //variable
    string line;
    
    cout <<"Enter A String: "<< endl;
    cin >>line; //cin function reads from console
    cout << "\n>> You Have Keyed In " <<line <<endl;

    return 0;
}


//Q.2 A program is required to prompt for and accept a time and compute the number of 
//seconds elapsed since midnight. The time should be entered in the format  HH:MM:SS.
#include<iostream>
using namespace std;
int main (){
    int hours, minutes, seconds, hours_sec, minuted_sec, total;
    cout << "enter the time in hours, minutes, and seconds."<<endl;
    cin >> hours >> minutes >> seconds;
    cout << hours << ":" << minutes << ":" << seconds << endl;
    hours_sec = hours*3600;
    minuted_sec =  minutes*60;
    total = hours_sec + minuted_sec + seconds;
    cout << "time in seconds:" << total << " seconds";
    return 0;
}

//Q.2.1 A program is required to prompt for and accept a time and compute the number of 
//seconds elapsed since midnight. The time should be entered in the format  HH:MM:SS.


//Q.3 The area of a rectangle is the rectangle’s length times its width. Write a program that 
//asks for the length and width of two rectangles. The program should tell the user 
//which rectangle has the greater area, or if the areas are the same
#include <iostream>
using namespace std;

int main()
{
    // Variables
    float l1, 
          l2, 
          w1, 
          w2, 
          rectangle1, 
          rectangle2;

    // Ask the user for l and w of 2 rectangles
    cout << endl;
    cout << "What is the length of the first rectangle: ";
    cin >> l1;
    cout << "What is the width: ";
    cin >> w1;
    cout << "What is the length of the second rectangle: ";
    cin >> l2;
    cout << "The width: ";
    cin >> w2;
    cout << endl;

    // Calculate area for each rectangle
    rectangle1 = l1 * w1;
    rectangle2 = l2 * w2;

    // Decide & display rectangle with greatest area
    if (rectangle1 > rectangle2)
        cout << "Area for rectangle 1 is greater." << endl;
    else if (rectangle1 < rectangle2)
        cout << "Area for rectangle 2 is greater." << endl;
    else if (rectangle1 == rectangle2)
        cout << "Area for both rectangles is the same." << endl;

    // Formatting last line.
    cout << endl;
    
    // Terminate program
    return 0;
}


