* lab4-bankaccount-struct.h */
/* BankAccount structure */
struct BankAccount
{
    /* by default - public accessibility */
    double balance;
    double interest_rate;
    BankAccount();
    ~BankAccount();
    void set(int dollars, int cents); //The account balance is set to $dollars.cents;
    void update(); //One year of simple interest is added to account balance
    double get_balance(); //Return the current account balance
    double get_rate(); //Return the current interest rate
    void set_rate(double rate); // rate is set to interest rate
};

// Another code (for the tut4/partb/exe2 - insert another Point structure to connect to the linkedlist (p1->p2->p3))
...
Point * p3 = new Point;
p3->x = 70;
p3->y = 6;
p3->nextaddress = NULL;
p2->nextaddress = p3;
...
