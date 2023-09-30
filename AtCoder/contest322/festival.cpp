#include <iostream>
#include <vector>
using namespace std;

int N,M;


int main(){
    cin >> N >> M;
    vector<int> fireworksDays(N, 0);

    for (int i = 0; i < M; i++){
        int day;
        cin >> day;
        fireworksDays[day - 1] = 1;
    }

    for (int i = 0; i < N; i++){
        int daysToWait = 0;
        if (fireworksDays[i] == 0){
            while (i + daysToWait < N && fireworksDays[i + daysToWait] == 0){
                daysToWait++;
            }
        }
        cout << daysToWait << endl;
    }

    return 0;
}