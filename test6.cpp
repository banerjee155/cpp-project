#include <iostream>
#include <string.h>

using namespace std;

int main(){


	for (int j=5; j!=0; j--){
	for(int i=0; i<j; i++){
		cout << '*';
		
	}
	cout << '\n';
	}

	char a[10] = "*";
	char b[10]="banerjee";
	for (int i=0; i<5; i++){
		strcpy(b,"anirban");
	}
	cout << b;
	
	return 0;

}
