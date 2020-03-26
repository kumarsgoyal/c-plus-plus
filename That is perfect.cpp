#include<bits/stdc++.h>
using namespace std;

string Solve (int N) {
   int sum = 0;

    for(int i = 1; i <= N/2; i++) {
        if(N%i == 0) {
           sum += i;
        }
    }

    if(sum == N) {
        return "YES";
    }

    return "NO";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++) {
        int N;
        cin >> N;
        string out = Solve(N);
        cout << out << "\n";
    }
}