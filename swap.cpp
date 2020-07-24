#include <iostream>

using namespace std;


void print_list(int *num){
	for (int i=0; i<10; i++){
		// cout << num[i] << ", ";
		cout << *(num+i) << ',';
	}
}
void init_c(int *num){
	int a = 1;
	for(int i=0; i<10; i++){
		num[i] = a;
		// cout << num[i] << endl;
		a++;
	}

	for(int i=0; i<10; i++) *(num+i)=1;
		

}
 
void swap(int *num1, int *num2){
	int c = *num1;
	*num1 = *num2;
	*num2 = c;
	
}

int main() {
	int a = 10;
	int b = 20;
	int c[10] = {3, 4, 2, 6, 4, 5, 9, 8, 4, 23};
	
	
	//swap(&a, &b);
	
	//cout << "a-> " << a << " b-> "<< b;
	
	// init_c(c);
	print_list(c);


	//for(int i=0; i<10; i++) cout << c[i] << ',';

}
