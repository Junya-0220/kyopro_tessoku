#include <iostream>
#include <string>
using namespace std;

// int N;
// string S;

int main(){
/*
    自分の回答
    cin >> N >> S;
    string target = "ABC";
    size_t found = S.find(target);
    if (found != string::npos) {
        cout << found + 1 << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;

*/
    int N;
    string S;
    cin >> N >> S;
    int ans = -1;
    for (int i = 0; i < N - 2; i++){
        if (S[i] == 'A' and S[i+1] == 'B' and S[i + 2] == 'C'){
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}