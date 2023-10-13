#include <iostream>
using namespace std;

int findSecondMinTemperature(int temperatures[], int N) {
    int minTemp = temperatures[0];
    int secondMinTemp = temperatures[1];

    if (minTemp > secondMinTemp) {
        swap(minTemp,secondMinTemp);
    }

    for (int i = 2; i < N; i++) {
        if (temperatures[i] < minTemp) {
            secondMinTemp = minTemp;
            minTemp = temperatures[i];
        }
        else if (temperatures[i] < secondMinTemp && temperatures[i] != minTemp) {
            secondMinTemp = temperatures[i];
        }
    }

    return secondMinTemp;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        int temperatures[N];
        for (int j = 0; j < N; j ++) {
            cin >> temperatures[j];
        }

        int secondMinTemp = findSecondMinTemperature(temperatures,N);

        cout << secondMinTemp <<endl;
    }
}

