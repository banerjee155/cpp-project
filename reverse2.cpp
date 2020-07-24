#include <iostream>

using namespace std;

int main() {
	
	int number;
	cout << "Enter a number: - ";
	cin >> number;
	int out = 0;
	int num = 0;
	do { 
		out = out*10;
		num = number%10;
		out = out + num;
		
		// cout << out << endl;
		
		number = number/10;

	} while (number!=0);
	
	
cout << out;	

}
