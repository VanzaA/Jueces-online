// From: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    
    int i, n, m, value, count, jack[1000000];  
   
    while(cin >> n >> m, n || m){
        for (i = 0; i < n; i++){
            cin >> jack[i];
        }
        count = i = 0;
        while (m--){
            cin >> value;
            while (i < n && jack[i] < value){
                i++;
            }
            if(i < n && jack[i] == value){
                count++;
            }
        }
        cout << count << endl;
    }   

    return 0;
}
    
