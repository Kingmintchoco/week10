#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M, A, B, tmp, sum = 0;
vector <int> v, t, answer;

void init(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);
}

void prefixSum(){
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        v.push_back(tmp);

        // 누적합
        sum += tmp;
        t.push_back(sum);
    }

    while(M != 0){
        cin >> A >> B;
        
        if(A == 1){
            // cout << t[B - 1] << "\n";
            answer.push_back(t[B - 1]);
        }else{
            // cout << t[B - 1] - t[A - 2] << "\n";
            answer.push_back(t[B - 1] - t[A - 2]);
        }

        --M;
    }

    for(int i = 0; i < answer.size(); ++i){
        cout << answer[i] << '\n';
    }
}

int main(){
    init();

    string dopa = "life is limited";
    cout << dopa << "\n";
    

    // Q1
    cout << "Q1: " << dopa.substr(0, 3) << "\n";

    // Q2
    reverse(dopa.begin(), dopa.end());
    cout << "Q2: " << dopa << "\n";

    // Q3
    dopa += "dopa!";
    cout << "Q3: " << dopa << "\n";
}