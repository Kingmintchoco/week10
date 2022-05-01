#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    /* clock */
    vector <int> v;
    for(int i = 1; i <= 12; ++i) v.push_back(i);    // 1 2 3 4 5 6 7 8 9 10 11 12
    rotate(v.begin(), v.begin() + 1, v.end());
    for(int i = 0; i < v.size(); ++i) cout << v[i] << " ";

    cout << endl;

    /* reverse clock */
    vector <int> r;
    for(int i = 1; i <= 12; ++i) r.push_back(i);
    rotate(r.begin(), r.begin() + r.size() - 1, r.end());
    for(int i = 0; i < r.size(); ++i) cout << r[i] << " ";

}