#include <iostream>
using namespace std;

int max(int *nums){
	int max = 0;
	for (int i=0; i < 10; i++){
		if (max < nums[i]){
			max = nums[i];
		}
	}
	cout << max;
	return 0;
}

int max2(int *nums){
	int max = 0;
	for (int i=0; i < 10; i++){
		if (max < *(nums+i)){
			max = *(nums+i);
		}
	}
	return max;
}

double avg(int *nums){
	int tot = 0;
	int totnums = 0;
	for (int i=0; i < 10; i++){
		tot += nums[i];
		totnums += 1;
	}
	return (double) tot/totnums ;
}



int main(){
	// int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// cout << "Maximum Number with max1 is " << max2(c) << endl;
	// cout << avg(c);
	
	
	// char name[100] = "MOUSUMI BANERJEE";
	// for(int i=0; name[i]!='\0'; i++){
	//	cout << name[i];
	//	if (i>=5) continue;
	//	cout << ", ";
	//	}


	struct student{
		char *name;
		char *add;
		int age;
	};
	
	char a[100] = "anish";
	char b[100] = "rohini";
	student std1
	std1.name = a;
	std1.add = b;
	std1.age = 12;
	
	cout << std1.name << ' ' << std1.add << ' ' << std1.age;
	
	return 0;
	
}
