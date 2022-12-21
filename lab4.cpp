//preprocessor directive
# include <iostream>
# include "lab4-bankaccount-struct.h" 
# include "iomanip"
using namespace std;
/* MAIN FUNCTION */
int main()
{  
    /* tutorial4 - part b - BankAccount structure */
    //1) structure variable
    BankAccount acc1; 
    //2) pointer variable - use -> symbol to access to the member of the structure
    // BankAccount * acc1 = new BankAccount;
    //prompt the user for dollar and cents
    int dollar, cent;
    cout << "Enter dollar and cent = ";
    cin >> dollar >> cent;
    acc1.set(dollar, cent);
    //cout << ">Current balance = " << fixed << setprecision(2) << acc1.get_balance() << endl;
    printf(">Current balance = %.2f", acc1.get_balance());
    //update account with interest
    double rate;
    cout << "\nEnter rate = " << endl;
    cin >> rate;
    acc1.set_rate(rate);
    acc1.update();
    cout << "\nUpdated with interest rate = " << rate << endl;
    cout << "\n>Current balance = " << fixed << setprecision(2) << acc1.get_balance() << endl;
    cout << endl;
    return 0;
}
BankAccount :: BankAccount()
 {
    cout << "=== BankAccount structure created ===" << endl;
 }
BankAccount :: ~BankAccount()
{
    cout << "=== BankAccount structure removed ===" << endl;
}
void BankAccount :: set(int dollars, int cents) //The account balance is set to $dollars.cents;
{
    double dbl_cent = cents;
    balance = dollars + dbl_cent/100;
}
void BankAccount :: update() //One year of simple interest is added to account balance
{
    balance += (balance * interest_rate);
}
double BankAccount :: get_balance() //Return the current account balance
{
    return this->balance;
}
double BankAccount :: get_rate() //Return the current interest rate
{
    return this->interest_rate;
}
void BankAccount :: set_rate(double rate) // rate is set to interest rate
{
    this->interest_rate = rate;
}
