// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425

#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main(int argc, char *argv[]){
    
    map<int, int> mapa;
    queue<int> cola;
    int n;

    while (cin >> n){
        if(mapa.find(n) != mapa.end()){
            mapa[n]++;
        }else{
            mapa[n]=1;
            cola.push(n);
        }
    }

    while(cola.size()){
        cout << cola.front() << " " << mapa[cola.front()] << endl;
        cola.pop();
    }


    return 0;
}