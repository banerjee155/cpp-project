#include <iostream>

using namespace std;


void disp_str_a(char ch, int c){
	for(int i=1; i<=c; i++) cout << ch;
}

void disp_str(char ch, int c){
	
	if (c==0) return;
	
	
	cout << ch;
	disp_str(ch, c-1);
	
	return;
}


int main(){
	
	disp_str('*',10);
	
}
