#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Bank
{private:
	char name[100], adress[100], y;
	float balance;

public:
	void open_account();
	void deposite_money();
	void withdraw_money();
	void display_account();

};

void Bank::open_account()
{
	cout << "Enter your full name: ";
	cin.ignore();
	cin.getline(name, 100);
	cout << "Enter your adress: ";
	cin.ignore();
	cin.getline(adress, 100);
	cout << "What type of account you want to open? Saving (S) or current (C): ";
	cin >> y;
	cout << "Enter amount for deposite: ";
	cin >> balance;
	cout << "Your account is created \n";
}

void Bank::deposite_money()
		{
			int a;
			cout << "Enter how much deposite: ";
			cin >> a;
			balance += a;
			cout << "Total amount you deposite: "<<balance;
		}

void Bank::display_account()
{
	cout << "Your full name: " << name;
	cout << "\n";
	cout << "Your adress: " << adress;
	cout << "\n";
	cout << "Type of account that you open: " << y;
	cout << "\n";
	cout << "Amount you deposite: " << balance;
	cout << "\n";
}

void Bank::withdraw_money()
{
	float amount;

	cout << "Enter amount to withdraw: ";
	cin >> amount;
	balance -= amount;
	cout << "Now total amount is left: " << balance;

}

	



void main()
{
	int ch,x;
	Bank obj;
	do {
		cout << "1) Open account \n";
		cout << "2) Deposit money \n";
		cout << "3) Withdraw money \n";
		cout << "4) Display account \n";
		cout << "5) Exit";
		cout << "\nSelect the option from above \n";
		cin >> ch;
		switch (ch)
		{ 
		case 1: cout <<"1) Open account \n";
			obj.open_account();
			break;
		case 2: cout << "2) Deposit money \n";
			obj.deposite_money();
			break;
		case 3: cout << "3) Withdraw money \n";
			obj.withdraw_money();
			break;
		case 4: cout<< "4) Display account \n";
			obj.display_account();
			break;
		case 5: 
			if (ch == 5)
			{
				exit(1);
			}
		default:
			cout << "This is not existing, try again \n";

		}
		cout << "\nIf you want to select next option then press y \n";
		cout << "If you want to exit then press n \n";
		x = getch();
		if (x == 'n' || x == 'N')
			exit(0);

			
	} while (x == 'y' || x == 'Y');
}