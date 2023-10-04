#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define chmin(a, b) (a) = min((a), (b))

const int inf = 1e9;

int N, X[101];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> X[i];
    sort(X, X + N);

    int ans = inf;
    rep(P, 1, 101) {
        int tot = 0;
        rep(i, 0, N) tot += (X[i] - P) * (X[i] - P);
        chmin(ans, tot);
    }
    cout << ans << endl;

    return 0;
}
