//Q.2 Write a C++ program to add two integers. Make a function add() to add integers and
//display sum in main() function. This function will return the result back to the
//main() function. 

// preprocessor directive
#include <iostream>
using namespace std;
//User-defined function
/* add() - add 2 integers */
/* Q2 */
/* function prototype */
int add(int, int);
//Main function
int main() {
    cout << "Hello world!" << endl;
    int a = 10;
    int b = 10;
    int sum = add(a, b); //calling function
    cout << "Sum = " << sum;
    return 0;
}
/* function definition */
int add(int i1, int i2){
    return i1+i2;
}

//Q.1. Write a C++ program to add two integers. Make a function add() to add integers and
//display sum in main() function. This function will not return any result back to the
//main() function.
// preprocessor directive
#include <iostream>
using namespace std;
//User-defined function
/* add() - add 2 integers */
/* Q2 */
/* function definition */
int add(int i1, int i2){
    return i1+i2;
}
//Main function
int main() {
    cout << "Hello world!" << endl;
    int a = 10;
    int b = 10;
    int sum = add(a, b); //calling function
    cout << "Sum = " << sum;
    return 0;
}
//Test yourself questions for Part A:
//1. Write a C++ program to print all even numbers between two numbers (entered by the
//user) by making a user-defined function. Display the answer in main() function.

#include<iostream>
using namespace std;

int main()
{
	int number;
	int num;
	
	cout << "\nPlease Enter Maximum limit Value to print Even Numbers =  ";
	cin >> number;
		cout << "\nPlease Enter Minimum limit Value to print Even Numbers =  ";
	cin >> num;
	
	cout << "\nList of Even Numbers from 1 to " << number << " are\n"; 
	for(int i = num; i <= number; i++)
  	{
  		if ( i % 2 == 0 )
  		{
  			cout << i <<" ";
		}	
  	}
		
 	return 0;
}



