//control structure and function
#include <iostream>
#include <cstdlib>
using namespace std;

void geometricsequence();
void checkage();
void infinite();
void numberguessinggame();
void correspondingday();
void menu();

int main(){
	int option;
	do{
		cout<<"Pick which program you want to run: "<<endl;
		cout<<"1. Geometric sequence";
		cout<<"2. Verifying age";
		cout<<"3. Infinite loop until 0 is entered";
		cout<<"4. Number guessing \"game\"";
		cout<<"5. Corresponding day";
	}while(option<5 && option>0);
	cin.get();
	return 0;
}


