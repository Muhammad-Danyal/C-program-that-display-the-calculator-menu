#include <iostream>
using namespace std;
int menu(int,int,int);

int main() {
	int a, b;
	int choice;

	cout << "	MENU\n";
	cout << "************************\n";
	cout << "1.Add\n";
	cout << "2.substract\n";
	cout << "3.Multiply\n";
	cout << "4.Divide\n";
	cout << "5.Modulus\n";
	cout << "Enter your choice\n";
	cin >> choice;
	cout << "Enter two numbers\n";
	cin >> a >> b;

	cout << menu(choice,a, b);

	return 0;
}
int menu(int choice, int a, int b) {
	
	if (choice == 1)
		return a + b;
	if (choice == 2)
		return a - b;
	if (choice == 3)
		return a * b; 
	if (choice == 4)
		return a / b;
	if (choice == 5)
		return a % b;
	else {
		cout << "opertor not found\n";
	}
}