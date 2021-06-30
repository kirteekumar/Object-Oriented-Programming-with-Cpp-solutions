/* Define a class to represent a bank account. Include the following members:
Data members
(a) Name of the depositor
(b) Account number
(c) Type of account
(d) Balance amount in the account
Member functions
(a) To assign initial values
(b) To deposit an amount
(c) To withdraw an amount after checking the balance
(d) To display name and balance
Write a main program to test the program. W E B */

#include <iostream>

using namespace std;

class bank_account
{
	string  name;
	string account_number;
	char type;
	long balance_amount;
	
	public:
	void assign_init_vals(string name, string account_number, char type, long balance_amount );
	void deposit(long deposit_amt);
	void withdraw(long withdraw_amt);
	void display(void);
};

void bank_account::withdraw(long withdraw_amt)
{
    if((balance_amount-withdraw_amt)>=0)
    {
	    balance_amount=balance_amount-withdraw_amt;
    }
    else
    {
        cout<<"Insufficient amount\n";
    }
}

void bank_account::display()
{
    cout<<"balance_amount : "<<balance_amount<<"\n";
}


void bank_account::assign_init_vals(string name, string account_number, char type, long balance_amount )
{
    bank_account::name=name;
    bank_account::account_number=account_number;
    bank_account::type=type;
    bank_account::balance_amount=balance_amount;
}


void bank_account::deposit(long deposit_amt)
{
	balance_amount=balance_amount+deposit_amt;
}


int main()
{
	char name[100];
	char account_number[100];
	char type;
	long balance_amount;
	int c;
	long amt;
	
	bank_account account_one;
	
	while(1)
	{
    	cout<<"1. Enter init values\n";
    	cout<<"2. Deposite an amount\n";
    	cout<<"3. Withdraw an amount\n";
    	cout<<"4. Show balance\n";
    	cout<<"5. Exit\n";
    	cout<<"Enter the choice\n";
    	cin>>c;
    	
        	switch(c)
        	{
        	case 1:
        		account_one.assign_init_vals("Kirteekumar","11088",'P',1000);
        		cout<<"Init values are assigned.!\n";
        		break;
        	case 2:
        		cout<<"Enter amount to be deposited : ";
        		cin>>amt;
        		account_one.deposit(amt);
        		break;
        	case 3:
        	    cout<<"Enter the amount to Withdraw : ";
        	    cin>>amt;
        	    account_one.withdraw(amt);
        		break;
        	case 4:
        	    account_one.display();
        		break;
        	case 5:
        	    return 0;
			default :
				cout<<"Invalid choice\n";
        	}
    	}
    return 0;
}
