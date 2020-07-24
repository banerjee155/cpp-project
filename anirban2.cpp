#include <iostream>
#include <cstdlib>



using namespace std;


int len(char* s){
	int i = 0;

	while(s[i]!='\0') i++;
	
	return i;
}

void upper(char* s){
	// for (int i=0; s[i] != '\0'; i++)
	//	if (s[i] >= 97 && s[i] <= 122) s[i] = s[i]-32;

	while(*s != '\0'){
		if (*s >= 97 && *s <= 122) {
			*s = *s - 32;
		}
		s++;
	}
}

void lower(char *s){
	for (int i=0; s[i] != '\0'; i++)
		if (s[i] >= 65 && s[i] <= 90) s[i] = s[i]+32;
	
}



int main(){

	// char name[100] = "anish banerjee";
	char name[] = "anirban-banerjee";
	int *i = (int *) malloc(sizeof(int)*1000000000);
	if(!i){
			cout << "error";
			exit(1);
	}
	i[0] = 0;
	i[1] = 0;
	cout << i[0] << i[1];
	
	

	// cout << "length is " << len(name);
	//cout << (int) 'A' << (int) 'Z';
	
	//lower(name);
	upper(name);
	cout << name;
	int j;
	cin >> j;
	free(i);
	
}

