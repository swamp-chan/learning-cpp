
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

void menu();
vector<int> fillVector(int arr[], int n);
void iterators();

int main(){
	do{
		menu();
	}while(1);
	return 0;
}


void menu(){
	system("cls");
	int opt, n; 
	cout<<"1. Different ways to use iterators"<<endl;

	cin>>opt;
	switch (opt){
 		case 1:
		iterators();
		break;

	}

}

//The task is to insert elements of given array to vector in same order as in arr  and return that vector.
vector<int> fillVector(int arr[], int n) {
    int i;
    vector<int> f;
    for(i=0; i<n; i++){
        f.push_back(arr[i]);
    }
    
    return f;
}

void iterators(){

	vector<int> vec1 = {6,7,11,12,14,15};
	vector<string> vec2 = {"Apple", "Bannana", "SigmaBoy", "Transistor"};

	cout<<"Original Vectors: "<<endl;
	cout<<"(Printed Using the traditional for loop)"<<endl;
	for(int i = 0; i<vec1.size(); i++){
		cout<<vec1[i]<<" ";
	}
	cout<<endl;
	for(int j = 0; j<vec2.size(); j++){
 		cout<<vec2[j]<<" ";
	}
	cout<<endl;
	
	cout<<"(Printed Using raged for loops)"<<endl;
	for(int i: vec1){
 		cout<<i<<" ";
	}
	cout<<endl;
	for(string j:vec2){
		cout<<j<<" ";
	}
	cout<<endl;
	system("pause");
}

