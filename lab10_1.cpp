#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i=1;
	double init , per , year ,x ,f ,u;
	cout << "Enter initial loan: ";
	cin >> init;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> year;

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

while (true) {
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << init;
	x = init*(per/100);
	cout << setw(13) << left << x;
	u = x+init;
	cout << setw(13) << left << u;
		if (u <= year ) {
				cout << setw(13) << left << u;
			f = 0.00;
			cout << setw(13) << left << f;
			return 0;
	}
	cout << setw(13) << left << year;
	f = u-year;
	init = f;
	cout << setw(13) << left << f;
	cout << "\n";
	i++;
	if (f == 0) break;

}

	
	
	return 0;
}
