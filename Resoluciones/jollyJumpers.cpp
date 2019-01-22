//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979
//runtime error, no estaria encontrando el error :C
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char	const *argv[]){

	bool jolly;
	int cant,ant, act, comp;
	
	while(cin >> cant){
	
		jolly = true;
		ant = 9999;
		vector <bool> resultados(cant,false);
	
		if(cant == 1){
			cin >> act; 
			if(act == 1){
				cout << "Jolly" << endl;
			}
			else{
				cout << "Not jolly" << endl;
			}
			continue;
		}
	
		for (int i = 0; i < cant; i++){
			cin >> act;
			if (ant == 9999){
				ant = act;
				continue;
			}
			
			comp = abs(ant - act); 
			cout << comp << "--" << endl;
			if((comp == 0) || (comp >= cant) || (resultados[comp])){
				jolly = false;
				break;
			}
			resultados[comp] = true;
			ant = act;
		}
		if(jolly){
			cout << "Jolly" << endl;
		}
		else{
			cout << "Not jolly" << endl;
		}
		resultados.clear();
		resultados.shrink_to_fit();
	}
	return 0;
}