#include <iostream>
#include <string>
using namespace std;

// int N,M;
// string S,T;

int main(){
    /*
    自分の回答
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
    */

   int N, M;
   string S,T;
   cin >> N >> M >> S >> T;

   int is_prefix = true;
   for(int i = 0; i < N; i++){
    if (S[i] != T[i]) is_prefix = false;
   }
   int is_suffix = true;
   for (int i = 0; i < N; i++){
    if (S[i] != T[M - N + i])is_suffix = false;
   }

   if(is_prefix){
    cout << (is_suffix ? 0 : 1) << endl;
   }else{
    cout << (is_suffix ? 2 : 3) << endl;
   }


}
