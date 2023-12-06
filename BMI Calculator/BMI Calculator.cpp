#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int WeightUnit, HeightUnit;
	double Weight, W, Height, H, Result;
	char Continue = 'y';

	cout << "BMI Calculator\n";

	while (true) {
		while (true) {
			cout << "\nChoose the unit of measurement for weight\n";
			cout << "1 - Kg\n";
			cout << "2 - lbs\n";
			cin >> WeightUnit;

			if (WeightUnit == 1 || WeightUnit == 2)break;
			else {
				cout << "\nWrong input, try again:\n";
			}
		}

		switch (WeightUnit) {
		case 1:
		{
			cout << "\nWeight in kg: ";
			cin >> Weight;
			W = Weight;
		}
		break;
		case 2:
		{
			cout << "\nWeight in lbs: ";
			cin >> Weight;
			W = Weight / 2.205;
		}
		break;
		}


		while (true) {
			cout << "\nChoose the unit of measurement for height\n";
			cout << "1 - cm\n";
			cout << "2 - ft\n";
			cin >> HeightUnit;

			if (HeightUnit == 1 || HeightUnit == 2)break;
			else {
				cout << "\nWrong input, try again:\n";
			}
		}
		switch (HeightUnit) {
		case 1:
		{
			cout << "\nHeight in cm: ";
			cin >> Height;
			H = Height / 100;
		}
		break;
		case 2:
		{
			cout << "\nHeight in ft: ";
			cin >> Height;
			H = Height / 3.281;
		}
		break;
		}

		Result = W / (pow(H, 2));

		cout << "\nUnderweight = BMI less than 18.5.\n";
		cout << "Normal weight = BMI between 18.5 - 24.9.\n";
		cout << "Overweight = BMI between 25 - 29.9.\n";
		cout << "Obesity = BMI of 30 or greater.\n";

		cout << "\nYour result: " << Result << endl;

		if (Result < 18.5)
			cout << "You are underweight\n";
		if (Result >= 18.5 && Result <= 24.9)
			cout << "You have a healthy weight\n";
		if (Result >= 25 && Result <= 29.9)
			cout << "You are overweight\n";
		if (Result >= 30)
			cout << "You are obese\n";

		cout << "Continue with other values? (Type y - yes or n - no):\n";
		cin >> Continue;

		if (Continue == 'y')continue;
		else break;
	}
	return 0;
}