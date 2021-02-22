/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 1: 5)
	Цель: Вычислить подлётное расстояние до объекта, на котором производится сбрасывание бомбы.
*/

#include <iostream>
using namespace std;
int main() {
	int U, H;
		cout << "Enter the first number: ";
			cin >> U;
				if (U > 0) 
					{
					cout << "Successfully\n";
					}
				else
					{
					cout << "Error!" << endl;
					return 0;
					}
		cout << "Enter the second number: ";
			cin >> H;
				if (H > 0)
					{
					cout << "Successfully\n";
					}
				else
					{
					cout << "Error!" << endl;
					return 0;
					}
	double g = 9.8;
	double T = sqrt(2 * H / g);
		cout << "The time it takes for the bomb to reach the ground is equal to " << T << " seconds\n";
	double S = U * T;
		cout << "The approach distance to the object at which the bomb is dropped is equal to " << S << " meters\n";
	return 0;
}