#include <iostream>
#include <vector>
using namespace std;

// int N,M;

int main(){
    /*
    自分の回答
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
    */

   // 二分探索の場合
   int n,m;
   cin >> n >> m;
   vector<int>a(m);
   for(int i=0; i<m; i++){
    cin >> a[i];
    a[i]--;
   }
   vector<int>b(n+1);
   for(int i=0; i<m; i++) b[a[i]+1]++;
   for(int i=1; i<=n; i++) b[i]+=b[i-1];
   for(int i=0; i<n; i++){
        int  ok=n, ng=i-1;
        while(abs(ok-ng)>1){
            int mid=(ok+ng)/2;
            if(b[mid+1]-b[i]>=1)ok=mid;
            else ng=mid;
        }
        cout << ok - i << endl;
   }


    return 0;
}