// 백준 2439번
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
// 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

#include <iostream>

using namespace std;

int main(void) {
    int numberOfStar, numberOfSpace, starCnt = 1;

    cin >> numberOfStar;
    numberOfSpace = numberOfStar - 1;

    for (int i = 0; i < numberOfStar; i++) {
        for (int j = numberOfSpace; j > 0; j--) {
            cout << " ";
        }
        for (int k = starCnt; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
        starCnt++;
        numberOfSpace--;
    }

    return 0;
}