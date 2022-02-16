#include <iostream>

using namespace std;

int main() {
    int size;
    double* score;
    int max = 0;
    double result = 0;

    cin >> size;


    score = new double[size];
    for (int i = 0; i < size; i++) {
        cin >> score[i];
        if (max < score[i])
            max = score[i];
    }

    for (int i = 0; i < size; i++) {
        result += score[i] / max * 100;
    }


    cout << result / size;
    

}