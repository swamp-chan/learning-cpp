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
	do
	{
		system("cls");
		menu();
		cin >> option;
		system("cls");
		switch (option){
			case 1:	
				geometricsequence();
			break;
			case 2:
				checkage();
			break;
			case 3:
				infinite();
			break;
			case 4:
				numberguessinggame();
			break;
			case 5:
				correspondingday();
			break;
		}
	}while(option<=5 && option>0);
	cin.get();
	return 0;
	
}

void menu(){
	cout<<"Pick which program you want to run: "<<endl;
	cout<<"1. Geometric sequence"<<endl;
	cout<<"2. Verifying age"<<endl;
	cout<<"3. Infinite loop until 0 is entered"<<endl;
	cout<<"4. Number guessing \"game\""<<endl;
	cout<<"5. Corresponding day"<<endl;
	cout<<"Any key to exit."<<endl;
	cout<<endl;
}

void geometricsequence(){
	int first_term, ratio, n_term;
	cout<<"geometric sequence"<<endl;
	cout<<"\nenter first term, ratio and no. of terms(a, r, n): "<<endl;
	cin >>  first_term >>  ratio >>  n_term;
	for(int i = 0; i<n_term; i++){
		cout << first_term << endl;
		first_term *= ratio;
	}
	system("pause");
}
void checkage(){}
void infinite(){}
void numberguessinggame(){}
void correspondingday(){}


