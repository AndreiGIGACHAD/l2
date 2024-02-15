#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

int main() {
    float m[N][N];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            m[i][j] = rand() / 10.0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << setw(8) << setprecision(5) << m[i][j];
        cout << endl;
    }

    cin.get(); // ожидание нажатия клавиши перед выходом
    return 0;
}