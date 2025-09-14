//control structure and function

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

void geometricsequence();
void checkage();
void zero_game();
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
				zero_game();
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
	cout<<"~Press any other key to exit.~"<<endl;
	cout<<endl;
}

void geometricsequence(){
	int first_term, ratio, n_term;
	cout<<"geometric sequence"<<endl;
	cout<<"\nenter first term, ratio and no. of terms(a, r, n): "<<endl;
	cin >>  first_term >>  ratio >>  n_term;
	cout<<"\nSequence: "<<endl;
	for(int i = 0; i<n_term; i++){
		cout << first_term << endl;
		first_term *= ratio;
	}
	cout<<endl;
	system("pause");
}
void checkage(){
	int age;
label_1:
	cout << "Enter your age: ";
	cin >> age;
	cout << endl;
	if(age<1 ||  age>164){
		cout<<"Stop playing with me twin" << endl;
		goto label_1;
	}else if(age<18){
		cout<< "You a minor, stay safe twin"<<endl;
	}else if(age>=18 && age<30){
		cout<<"You young twin lock in twin"<<endl;
	}else if(age>=30 && age<60){
		cout<<"unc 😂😂"<<endl;
	}else{
		cout<<"granny"<<endl;
	}
	cout<<endl;
	system("pause");
}
void zero_game (){
	int user_choice;
	int counter = 0;
	int tries;
	vector<string> dialogue = {"You think im joking twin?", "Lock in twin ts aint you", "ts aint it gng", "it cant be that hard gng", "ts aint it twin ts aint it", "Twin can yo not even follow a simple instruction"};
	string win_msg = "You did it twin good j*b";
	string defeat_msg = "Womp womp you loose twin";

	cout<<"Enter 0 to win the game!"<<endl;
	cout<<"Enter how many tried you want: ";
	cin >> tries;
	cout<<"ENTER 0: "<<endl;
	while(counter<tries && user_choice != 0){
		if(counter>0)cout<<dialogue[counter%6] << endl;
		cin >> user_choice;
		counter++;
	}
	if(user_choice == 0){
		cout<<"\n"<<win_msg;
	}else{
		cout<<"\n"<<defeat_msg;
	}
	cout<<endl;
	system("pause");
}

void numberguessinggame(){
	srand(time(0));
	int tobeguessed;
	int range;
	int guess;
	int counter = 0;
	int tries_;
	vector<string> nice_message = {"Nice try twin but you are wrong", "WROOONG", "Try again ;3"};
	
	cout<<"Enter maximum number(range)(minimum is 0):";
	cin>>range;
	cout << "Enter no. of tries: ";
	cin>>tries_;
	tobeguessed = rand() % range;

	cout<<"\nBEGIN GUESSING:"<<endl;
	while(guess != tobeguessed && counter<tries_){
		if(counter!=0) cout<<nice_message[counter%3]<<endl;
		cin>>guess;
		counter++;
	}
	cout<<endl;
	if(guess == tobeguessed){
		cout<<"good j*b twin"<<endl;
	}else {
		cout<<"oof you loose twin the random number was: " << tobeguessed << endl;
	}
	cout<<endl;
	system("pause");

}

void correspondingday(){
	int option_dayno;
	vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
label_2:
	cout<<"Enter number 1-7 and the corresponding day shall be printed"<<endl;
	cout<<"Day: ";
	cin>>option_dayno;

	if(option_dayno>7 || option_dayno<1){
		cout<<"Stop playing with me twin"<<endl;
		goto label_2;
	}
	else{
		cout << days[option_dayno] << endl;
	}
	cout<<endl;
	system("pause");
}


