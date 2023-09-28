#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int a[]= {5,7,1,9,3};
    int length = sizeof(a) / sizeof(a[0]);
    cout << length << endl;
    for(int i = 0; i < length - 1; i++){
    
        for(int j = length - 1; j > i; j-- ){
            cout << "loop:a[j]:" << a[j] << endl;
            cout << "loop:a[j - 1]:" << a[j - 1] << endl;
            cout << " " << endl;
            if(a[j-1] > a[j]){
                cout<< "start a[j]:"  << a[j]<< endl;
                cout<< "start a[j-1]:"  << a[j-1]<< endl;
                cout<< " "<< endl;
                swap(a[j - 1], a[j]);
                cout<< "end a[j]:"  << a[j]<< endl;
                cout<< "end a[j-1]:"  << a[j-1]<< endl;
                cout<< " "<< endl;
            }
            
        }
    }
    cout << "sorted:" << endl;
    for (int i = 0; i < length; i++) cout << a[i] << endl; 
    return 0;
}
