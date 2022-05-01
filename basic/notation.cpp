#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;

int main(){
    int n;
    cin >> n;
    int b = 2; // 10진법 -> 2진법
    while(n > 1){
        v.push_back(n % b);
        n /= b;
    }
    if(n == 1) v.push_back(1);
    reverse(v.begin(), v.end());
    for(int a : v){
        if(a >= 10) cout << char(a + 55);
        else cout << a;
    }
    
}