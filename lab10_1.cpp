#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,inter,payback;
	int year=1;
	double PrevBalance,total,Newbalance,interest=0;
	

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> payback;
   


 
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

    Newbalance = 1;
	while(!(Newbalance == 0)) 
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	PrevBalance = loan; 
	cout << setw(13) << left << PrevBalance;
	interest = loan*(inter/100);
	cout << setw(13) << left << interest;
	total = PrevBalance + interest;
	cout << setw(13) << left << total;
	if (total < payback)
	{
		payback = total;
	}
	cout << setw(13) << left << payback;
    Newbalance = total-payback;
	cout << setw(13) << left << Newbalance;
	cout << "\n";	
	year++;
    loan = Newbalance;
	
	}
	
	

	
	

	return 0;
}
