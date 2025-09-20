
#include <iostream>
#include <vectors>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;

void menu();
vector<int> fillvector(int arr[], int n);

int main(){
	do{
		menu();
	}while(1);
	return 0;
}


void menu(){
	system("cls");
	int opt, n; 
	cout<<"1. Insert array to vector in same order in array."<<endl;
	cout<<"2. Different ways to use iterators"<<endl;

	cin>>opt;
	switch (opt){
 		case 1:
			cout<<endl;
			cout<<"Enter size of array(n): ";
			cin>>n;
			int arr[n];
			cout<<"Enter array:"<<endl;
			for(int i = 0; i<n; i++){
 				cin>>arr[i];
			}
			vector<int> output = f(arr, n);
			for(int i = 0; i<0; i++){
 				cout<<output[i]<<" ";
			}
			cout<<endl;
			system("pause");
			
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
