//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double disc_rate = 0.1;
	const double shipping1 = 0.99;
	const double shipping2 = 4.99;
	double amt_owed = 0.0;
	char member = ' ';


	cout << "Amount owed before any discount and shipping: ";
	cin >> amt_owed;
	cout << "Premier Club member (Y/N)? ";
	cin >> member;


	if (toupper(member) == 'Y')
	amt_owed -= amt_owed * disc_rate;
	if (amt_owed >= 100.0)
	amt_owed += shipping1;
	else
	amt_owed += shipping2;

	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: "
	<< amt_owed << endl;
	return 0;
}	//end of main function