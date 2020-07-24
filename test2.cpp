#include <iostream>

using namespace std;

struct student{
	char name[100];
	char add[100];
	
	struct student* prv=NULL;
	struct student* next=NULL;
};


int count(){
	static int i=0;
	
	return i++;
	
}

int main(){

	cout << count() << endl << count() << endl << count();
	
	struct student std1;
	
	std1->name = "Anish Banerjee";
	std1->add = "rohini";
	
	struct student* s1 = new struct student[1]
	std1.next= s1;
	s1.prv = &std1 ;
	s1.name= "anirban";
	s1.add = "calcutta";
	
	return 1;
	
}

