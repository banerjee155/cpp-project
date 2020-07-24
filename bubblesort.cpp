#include <iostream>

using namespace std;

void swap(int *num, int pos1, int pos2){
	int temp = num[pos1];
	//int temp = *(num+pos1);
	
	num[pos1] = num[pos2];
	num[pos2] = temp;
	
}


void swap_a(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void print_list(int *num){
	for (int i=0; i<5; i++){
		cout << *(num+i) << ',';
	}
}


int len(char* s){
	int i = 0;

	while(s[i] != '\0') i++;
	
	return i;
}

void bubblesort(int *array, int length){
	int n = length - 1;
	int a = 0;
	
	while (a < length){
		int i = 0;
		while (i < n){
			if (array[i] > array[i+1]){
				swap(array, i, i+1);
			}
			i += 1;
		}
		a += 1;
		n -= 1;
	}
}

void bs_simple(int *nums, int l){
	for(int j=l-2; j>=0 ; j--)
		for(int i=0; i<=j; i++)
			if ( *(nums+i)> *(nums+i+1) ) swap_a(nums+i, nums+i+1);
}


void bs_recursive(int *nums, int l){

		if(l==1) return;

		for(int i=0; i<=l-2; i++)
			if ( *(nums+i)> *(nums+i+1) ) swap_a(nums+i, nums+i+1);
		
		bs_recursive(nums, l-1);
}

int main(){
	

	int l = 5;
	int c[l] = {8, 5, 4, 2, 1};
	
	// bubblesort(c, 5);
	bs_recursive(c, 5);
	
	print_list(c);
	
}
