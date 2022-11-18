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

// Part C Q.1 Write a program that able to print the even number that in the between of 1 to 50.
#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 51; i++)
		if (i % 2 == 0)
		{
			cout << "Even Number is :" << i << endl;
		}
		
	return 0;
}

// Part C Q.2 Write a program that asks the user for a positive integer value. The program should use a 
//loop to get the sum of all the integers from 1 up to the number entered. For example, if 
//the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
//Input validation: Do not accept a negative number.

#include<iostream>
using namespace std;

int main()
{

int num, sum1 =0;
do
{
	cout << "Enter Your Positive Number: " << endl;
	cin >> num;
} while (num < 0);

for (int k = 0; k <= num; k++)

	sum1 = sum1 + k;
	cout << "Total Number: " <<sum1 << endl;

		
	return 0;
}

// Part C Q.3 Calories Burned: 
//Running on a particular treadmill you burn 3.9 calories per minute. Write a program that 
//uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30 minutes.
#include<iostream>
using namespace std;

int main()
{
	int total;
	for (int i = 1; i < 30; i++)
	{
		i += 4;
		total = i * 3.9;
		cout << "You have burn: " << total << " Calories in "<<i<<" Minutes" << endl;
	}

		
	return 0;
}
//Part D Q.1 Compute the total cost of a meal inclusive of GST (Goods and Service Tax) and 
//tipping. Assume that the GST is fixed at 6% but the amount to tip will depend on the 
//customer. Your program should input the cost of the meal (before GST and tipping) 
//and the tip amount (to be input as a percentage).
#include<iostream>
using namespace std;

int main()
{
	double cost, tips,gst,gst1, total;
	cout << "Type The amount of Cost and GST in Percent: " << endl;
	cin >> cost >> tips;
	gst = 6.00 / 100 * cost;
	tips = tips / 100 * cost;
	gst1 = tips + cost;
	total = (cost + gst + tips);
	cout << "The total cost of the meal BEFORE GST and tipping: " << cost <<endl;
	cout << "The total cost of the meal AFTER GST: " << gst1 << endl;
	cout << "The total cost of the meal AFTER GST and tipping: " << total << endl;


		
	return 0;
}

//Part D Q.3 Write a C++ program ask to the user to enter number of rows for diamond dimension 
//to print the diamond pattern, then display the result on the screen. Note: Must use 
//loops to print the diamond.
#include <iostream>
using namespace std;

int main()
{
    int i, j, r;
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
   
    for (i = 0; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
           cout << endl;
    }
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}
