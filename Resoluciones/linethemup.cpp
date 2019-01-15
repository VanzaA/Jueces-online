// https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&Itemid=99999999&category=706&page=show_problem&problem=5377
#include <iostream>
#include <cstring>
using namespace std;

int N = 20;
bool decreasing(int j, string s[]){
	for (int i = 0; i < j - 1; i++){
		if(s[i] < s[i + 1]){
			return false;
		}
	}
	return true;
}


bool increasing(int j, string s[]){
	for (int i = 0; i < j - 1; i++){
		if(s[i] > s[i + 1]){
			return false;
		}
	}
	return true;	
}


int main (){
	string names[N];
	int cant;

	while (cin >> cant){
		
		for (int i = 0; i < cant; i++){
			cin >> names[i];
		}

		if(decreasing(cant, names)){
			cout << "DECREASING" << endl;
		} 

		else if (increasing(cant, names))
		{
			cout << "INCREASING" << endl;
		}
		else{
			cout << "NEITHER" << endl;
		}

	}
	
	return 0;

}