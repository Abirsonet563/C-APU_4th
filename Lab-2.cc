//Q.1 Write a C++ program to add two integers. Make a function add() to add integers and 
//display sum in main() function. This function will not return any result back to the 
//main() function

#include <iostream>
#include "dimond shape.cpp"
using namespace std;

//function declaration
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a, b;
	cout << "Print 1st Number" << endl;
	cin >> a;
	cout << "Print 2nd Number" << endl;
	cin >> b;

	cout <<"Total Sum Is: " << add(a, b) << endl;
	return 0;
}


//Q2. Write a C++ program to add two integers. Make a function add() to add integers and 
//display sum in main() function. This function will return the result back to the 
//main() function.

#include <iostream>
#include "dimond shape.cpp"
using namespace std;

int main()
{
	int a;
	cout << "Put Number" << endl;
	cin >> a;

	cout << "The Even Numbers are Between 1 to " << a<<endl;
	for (int i = 0; i < a; i=i+1)
		if (i % 2 != 0)
		{
			cout << i << endl;
		}
	return 0;
}

//B.1 Write a program that computes the summation of array values. 
array size = 5
Elements = { 10, 2, 5, 0, 30}

//AlterNative Answer From Lecturer
# include <iostream>
using namespace std;
/* function definition */
int sum(int arr[], int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];    
    }
    return sum;
}
int main()
{
    cout << "==== TUTORIAL 2 ====" << endl;
    int billy[] = {16, 2, 77, 40, 12071, 51};
    //compute the length of arr
    int len = sizeof(billy) / sizeof(billy[0]);
    int total = sum(billy, len);
    for (int i = 0; i < len; i++)
    {
        cout << billy[i];
        if( i == (len-1) )
        {
            cout << " = " << total << endl;
            break;
        } else{
            cout << " + ";
        }
    }
    return 0;
}

//B.2 Write a C++ program to store and calculate the sum of 5 numbers entered by the user 
//using arrays.
#include <iostream>
#include <limits>

int main(void) {

    int number = 0,
        sum = 0;
    const char* label[] = { "first", "second", "third", "fourth", "fifth" };

    while (number < 5)      /* loop continually until 5 int entered */
    {
        int tmp;            /* temporary int to fill with user-input */
        std::cout << "\nenter " << label[number] << " number: ";
        if (!(std::cin >> tmp)) {             /* check stream state */
            /* if eof() or bad() exit */
            if (std::cin.eof() || std::cin.bad()) {
                std::cerr << "  (user canceled or unreconverable error)\n";
                return 1;
            }
            else if (std::cin.fail()) {         /* if failbit */
                std::cerr << "  error: invalid input.\n";
                std::cin.clear();               /* clear failbit */
                /* extract any characters that remain unread */
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        else {  /* on succesful read of int, add to sum, increment number */
            sum += tmp;
            number++;
        }
    }

    std::cout << "\nsum: " << sum << '\n';
}

// Answer From Lecturer
# include <iostream>
using namespace std;
/* function definition */
int sum(int arr[], int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];    
    }
    return sum;
}
int main()
{
    cout << "==== TUTORIAL 2 ====" << endl;
    const int LENGTH = 5;
    int arr[LENGTH];
    //prompt the user for input
    for (int i = 0; i < LENGTH; i++)
    {
        cout << "Enter your number " << (i+1) << " : ";
        cin >> arr[i];
    }
    //compute sum thru function call
    int total = sum(arr, LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        cout << arr[i];
        if( i == (LENGTH-1) )
        {
            cout << " = " << total << endl;
            break;
        } else{
            cout << " + ";
        }
    }
    return 0;
}
//1. Part B Write a program that checks if a given array is a Palindrome. Palindrome is a number 
//that remains the same when its digits are reversed. Like 16461

#include <iostream>

using namespace std;
int main() {

    cout << "enter the Number" << endl;

    int n, num, digit, rev = 0;
    cin >> num;//121 /12
    n = num;

    while (num != 0)
    {
   
        digit = num % 10; //1 /2
        rev = (rev * 10) + digit; //1 //121
        num = num / 10; //121/10 = 12, 12/10 = 1

    }
    if (n == rev)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}

//Part -B 4(Write a program to create and add two matrices.)
#include<iostream>
using namespace std;

int main()
{
    int M1 [10][10], M2[10][10], Res[10][10];
    int R,C,i,j;
    cout<<"Enter The Size Of Matrix: ";
    cin >> R >>C;
    cout<<endl<<"First Metrix: ";
    
    for (i = 0; i<R; i++)
    {
        for (j=0; j<C; j++)
        cin>>M1[i][j];
    }
       cout<<endl<<"Second Metrix: ";
    
    for (i = 0; i<R; i++)
    {
        for (j = 0; j<C; j++)
        cin>>M2[i][j];
      cout<<endl<<"Sum 0f Two Metrix: "<<endl;  
    }for (i = 0; i<R; i++)
    {
        for (j = 0; j<C; j++)
        {
            Res[i][j] = M1[i][j]+M2[i][j];
            cout<<Res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

