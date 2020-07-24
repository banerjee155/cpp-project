#include <iostream>

using namespace std;

int main() {
	
	int number;
	cout << "Enter a number: - ";
	cin >> number;
	
	int num1 = number % 10;
	
	int num2 = (number / 10) % 10;
	
	int num3 = (number / 100) % 10;
	
	int num4 =  (number / 1000) % 10;
	
	cout << "The reversed number is: - " << (num1*1000) + (num2*100) + (num3*10) + num4;
}
