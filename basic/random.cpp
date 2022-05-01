#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main(){
    // set seed
    random_device rd;

    // 난수 생성 엔진 초기화
    mt19937 gen(rd());

    // 1부터 50까지 균등하게 나타나는 난수열 생성하기 위해 균등 분포 정의
    uniform_int_distribution <int> dis(1, 50);

    vector <int> v;
    for(int i = 0; i < 10; ++i){
        v.push_back(dis(gen));
        cout << v[i] << " ";
    }cout << "\n";

    // accumulate: 배열의 합을 쉽고 빠르게 구해주는 함수
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n";

    // max_element: 배열 중 가장 큰 요소를 추출하는 함수
    int max = *max_element(v.begin(), v.end());
    cout << max << "\n";

}