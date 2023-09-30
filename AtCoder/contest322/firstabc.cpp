#include <iostream>
#include <string>
using namespace std;

int N;
string S;

int main(){
    cin >> N >> S;
    string target = "ABC";
    size_t found = S.find(target);
    if (found != string::npos) {
        cout << found + 1 << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}