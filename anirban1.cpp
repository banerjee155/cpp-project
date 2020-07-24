#include <iostream>

using namespace std;

int main(){
	
	int num[4];
	int nums[4][4];
	
	int n0[4];
	int n1[4];
	int n2[4];
	int n3[4];

	int* n[4];
	n[0] = n0;
	n[1] = n1;
	n[2] = n2;
	n[3] = n3;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			nums[i][j] = 0;
			// cout << nums[i][j];
		}
		// cout << '\n';
	}
	
	// cout << "\n Print address \n";
	for (int i=0; i<4; i++){
		// cout << nums[i] << ", ";
		int* j;
		j = nums[i];
		cout << '\n';
		for (int k=0; k<4; k++){
			cout << *j++ << ", "; 
			j++;
		}
	}
	
}
