/**********************************
Merrell Gilbert (900381063)
Program : 5
*/
#include <iostream>
using namespace std;

// declare constants




int main() 
{
	double  rentAmount, increaseAmount, maintFee;
	double units[50];
	int maxIndex = 0;
	//Query the user.
	cout << "What is the rental amount ? " << endl;
	cin >> rentAmount;
	
	cout << "How much will the rent increase by ? " << endl;
	cin >> increaseAmount;

	cout << "What is the maintenance fee ? " << endl;
	cin >> maintFee;


	// Process the input
	for (int i = 0; i < 50; i++) {
		units[i] = (50 - i) * (rentAmount + (increaseAmount * i) - maintFee);
	}

	
	for (int i = 0; i < 50; i++) {
		//printf("Units not filled: %d Profit: %f\n", i, units[i]);
		if (units[maxIndex] < units[i])
			maxIndex = i;
	}

	//cout << "To maximize profit you must rent: "<< rentAmount + (increaseAmount * maxIndex) << endl;
	cout << "To maximize profit you must rent " << 50 - maxIndex << " units." << endl;
	cout << "Best Income: " << units[maxIndex] << endl;



	system("pause");
	return 0;
}
  // end main