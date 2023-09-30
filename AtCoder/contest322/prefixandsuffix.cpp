#include <iostream>
#include <string>
using namespace std;

int N,M;
string S,T;

int main(){
    cin >> N >> M;
    cin >> S >> T;
    if(S == T){
        cout << 0;
    }
    else if (T.find(S) == 0) {
        cout << 1 << endl;
    }
    else if(T.rfind(S) != string::npos){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
}
