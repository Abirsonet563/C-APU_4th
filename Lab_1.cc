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
/*
#include <iostream>
using namespace std;

int main()
{
 cout <<"Hello World" <<endl;
 
 char line2[] = "10:20:20";
 cin >> line2;
 int h,m,s;
 sscanf_s(line2, "%d:%d:%d", 8h, 8m, 8s);
 cout <<"Hours: "<<h<<endl;
 cout <<"min: "<<m<<endl;
 cout <<"Seconds: "<<s<<endl;
 return 0;
}
*/

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

// Q.4 Write a program that reads in two integers and determines and prints if the first is a 
// multiple of the second. 
#include <iostream>

using namespace std;

int main()
{
	int n1, n2;

	cout << "Enter Two Intiger" << endl;
	cin >> n1 >> n2;
	if (n1 % n2 == 0) {
		cout << n1 << " is multiple of " << n2;
	}
	else if (n1 % n2)
	{
		cout << n1 << " is not multiple of " << n2;
	}
	return 0;
}

//Q.5 Write a program that asks the user to enter a number within the range of 1 through 10.
//Use a switch statement to display the Roman numeral version of that number.
//Input validation : Do not accept a number less than 1 or greater than 10.

#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a Number between 1-10" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "The Roman number version of " << number << " is";
		cout << "I";
		break;
	case 2:
		cout << "The Roman number Version of" << number << "is";
		cout << "II";
		break;
	case 3:
		cout << "The Roman number Version of" << number << " is";
		cout << "III";
		break;
	case 4:
		cout << "The Roman number Version of" << number << " is";
		cout << "IV";
		break;
	case 5:
		cout << "The Roman number Version of" << number << " is";
		cout << "V";
		break;
	case 6:
		cout << "The Roman number Version of" << number << " is";
		cout << "VI";
		break;
	case 7:
		cout << "The Roman number Version of" << number << " is";
		cout << "VII";
		break;
	case 8:
		cout << "The Roman number Version of" << number << " is";
		cout << "VIII";
		break;
	case 9:
		cout << "The Roman number Version of" << number << " is";
		cout << "VIIII";
		break;
	case 10:
		cout << "The Roman number Version of" << number << " is";
		cout << "X";
		break;
	default:cout << "Enter a number in the range (1- 10)"; break;
	}
	return 0;
}
