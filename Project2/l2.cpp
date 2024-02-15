
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

const int N = 5; // Размер матрицы

// Функция для нахождения минимума матрицы
float findMin(const vector<vector<float>>& matrix) {
    float min = matrix[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (matrix[i][j] < min)
                min = matrix[i][j];
    return min;
}

// Функция для нахождения максимума матрицы
float findMax(const vector<vector<float>>& matrix) {
    float max = matrix[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (matrix[i][j] > max)
                max = matrix[i][j];
    return max;
}

// Функция для нахождения максимума нижнетреугольной части матрицы
float findMaxLowerTriangle(const vector<vector<float>>& matrix) {
    float max = matrix[1][0]; // Инициализируем максимум первым элементом ниже главной диагонали
    for (int i = 2; i < N; i++)
        for (int j = 0; j < i; j++)
            if (matrix[i][j] > max)
                max = matrix[i][j];
    return max;
}

// Функция для нахождения максимума верхнетреугольной части матрицы
float findMaxUpperTriangle(const vector<vector<float>>& matrix) {
    float max = matrix[0][1]; // Инициализируем максимум вторым элементом выше главной диагонали
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (matrix[i][j] > max)
                max = matrix[i][j];
    return max;
}

// Функция для нахождения минимума нижнетреугольной части матрицы
float findMinLowerTriangle(const vector<vector<float>>& matrix) {
    float min = matrix[1][0];
    for (int i = 2; i < N; i++)
        for (int j = 0; j < i; j++)
            if (matrix[i][j] < min)
                min = matrix[i][j];
    return min;
}

// Функция для нахождения минимума верхнетреугольной части матрицы
float findMinUpperTriangle(const vector<vector<float>>& matrix) {
    float min = matrix[0][1];
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (matrix[i][j] < min)
                min = matrix[i][j];
    return min;
}

// Функция для нахождения минимума главной диагонали матрицы
float findMinMainDiagonal(const vector<vector<float>>& matrix) {
    float min = matrix[0][0];
    for (int i = 1; i < N; i++)
        if (matrix[i][i] < min)
            min = matrix[i][i];
    return min;
}

// Функция для нахождения максимума главной диагонали матрицы
float findMaxMainDiagonal(const vector<vector<float>>& matrix) {
    float max = matrix[0][0];
    for (int i = 1; i < N; i++)
        if (matrix[i][i] > max)
            max = matrix[i][i];
    return max;
}

// Функция для нахождения минимума второстепенной диагонали матрицы
float findMinSecondaryDiagonal(const vector<vector<float>>& matrix) {
    float min = matrix[0][N - 1];
    for (int i = 1; i < N; i++)
        if (matrix[i][N - 1 - i] < min)
            min = matrix[i][N - 1 - i];
    return min;
}

// Функция для нахождения максимума второстепенной диагонали матрицы
float findMaxSecondaryDiagonal(const vector<vector<float>>& matrix) {
    float max = matrix[0][N - 1];
    for (int i = 1; i < N; i++)
        if (matrix[i][N - 1 - i] > max)
            max = matrix[i][N - 1 - i];
    return max;
}

// Функция для нахождения среднеарифметического значения элементов матрицы
float findMean(const vector<vector<float>>& matrix) {
    float sum = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            sum += matrix[i][j];
    return sum / (N * N);
}

// Функция для нахождения среднеарифметического значения элементов нижнетреугольной части матрицы
float findMeanLowerTriangle(const vector<vector<float>>& matrix) {
    float sum = 0;
    int count = 0;
    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++) {
            sum += matrix[i][j];
            count++;
        }
    return sum / count;
}


// Функция для нахождения среднеарифметического значения элементов верхнетреугольной части матрицы
float findMeanUpperTriangle(const vector<vector<float>>& matrix) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++) {
            sum += matrix[i][j];
            count++;
        }
    return sum / count;
}

// Функция для нахождения суммы элементов в строке матрицы
float sumRow(const vector<vector<float>>& matrix, int row) {
    float sum = 0;
    for (int j = 0; j <

       
        N; j++)
        sum += matrix[row][j];
    return sum;
}

// Функция для нахождения суммы элементов в столбце матрицы
float sumColumn(const vector<vector<float>>& matrix, int column) {
    float sum = 0;
    for (int i = 0; i < N; i++)
        sum += matrix[i][column];
    return sum;
}

// Функция для нахождения минимального значения в строках матрицы
vector<float> minRowValues(const vector<vector<float>>& matrix) {
    vector<float> minValues(N, matrix[0][0]);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < minValues[i]) {
                minValues[i] = matrix[i][j];
            }
        }
    }
    return minValues;
}

// Функция для нахождения минимального значения в столбцах матрицы
vector<float> minColumnValues(const vector<vector<float>>& matrix) {
    vector<float> minValues(N, matrix[0][0]);
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            if (matrix[i][j] < minValues[j]) {
                minValues[j] = matrix[i][j];
            }
        }
    }
    return minValues;
}

// Функция для нахождения максимального значения в строках матрицы
vector<float> maxRowValues(const vector<vector<float>>& matrix) {
    vector<float> maxValues(N, matrix[0][0]);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > maxValues[i]) {
                maxValues[i] = matrix[i][j];
            }
        }
    }
    return maxValues;
}

// Функция для нахождения максимального значения в столбцах матрицы
vector<float> maxColumnValues(const vector<vector<float>>& matrix) {
    vector<float> maxValues(N, matrix[0][0]);
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            if (matrix[i][j] > maxValues[j]) {
                maxValues[j] = matrix[i][j];
            }
        }
    }
    return maxValues;
}

// Функция для нахождения среднеарифметического значения строк матрицы
vector<float> meanRowValues(const vector<vector<float>>& matrix) {
    vector<float> meanValues(N, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            meanValues[i] += matrix[i][j];
        }
        meanValues[i] /= N;
    }
    return meanValues;
}

// Функция для нахождения среднеарифметического значения столбцов матрицы
vector<float> meanColumnValues(const vector<vector<float>>& matrix) {
    vector<float> meanValues(N, 0);
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            meanValues[j] += matrix[i][j];
        }
        meanValues[j] /= N;
    }
    return meanValues;
}

// Функция для нахождения суммы элементов нижнетреугольной части матрицы
float sumLowerTriangle(const vector<vector<float>>& matrix) {
    float sum = 0;
    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            sum += matrix[i][j];
    return sum;
}

// Функция для нахождения суммы элементов верхнетреугольной части матрицы
float sumUpperTriangle(const vector<vector<float>>& matrix) {
    float sum = 0;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            sum += matrix[i][j];
    return sum;
}

// Функция для нахождения элемента, наиболее близкого по значению к среднеарифметическому
float closestToMean(const vector<vector<float>>& matrix) {
    float mean = findMean(matrix);
    float closest = matrix[0][0];
    float minDiff = abs(matrix[0][0] - mean);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            float diff = abs(matrix[i][j] - mean);
            if (diff < minDiff) {
                minDiff = diff;
                closest = matrix[i][j];
            }
        }
    return closest;
}

// Функция для вывода матрицы
void printMatrix(const vector<vector<float>>& matrix) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << setw(8) << setprecision(5) << matrix[i][j];
        cout << endl;
    }
}

int main() {
    vector<vector<float>> matrix(N, vector<float>(N));

   
        // Ввод матрицы
        cout << "Введите элементы матрицы " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    // Пример использования функций
    cout << "Matrix Minimum: " << findMin(matrix) << endl;
    cout << "Matrix Maximum: " << findMax(matrix) << endl;
    cout << "Maximum of the Lower Triangular Part of the Matrix: " << findMaxLowerTriangle(matrix) << endl;
    cout << "Maximum of the Upper Triangular Part of the Matrix: " << findMaxUpperTriangle(matrix) << endl;
    cout << "Minimum of the Lower Triangular Part of the Matrix: " << findMinLowerTriangle(matrix) << endl;
    cout << "Minimum of the Upper Triangular Part of the Matrix: " << findMinUpperTriangle(matrix) << endl;


    cout << "Minimum of the Main Diagonal of the Matrix: " << findMinMainDiagonal(matrix) << endl;
    cout << "Maximum of the Main Diagonal of the Matrix: " << findMaxMainDiagonal(matrix) << endl;
    cout << "Minimum of the Secondary Diagonal of the Matrix: " << findMinSecondaryDiagonal(matrix) << endl;
    cout << "Maximum of the Secondary Diagonal of the Matrix: " << findMaxSecondaryDiagonal(matrix) << endl;
    cout << "Arithmetic Mean of the Matrix Elements: " << findMean(matrix) << endl;
    cout << "Arithmetic Mean of the Lower Triangular Part of the Matrix Elements: " << findMeanLowerTriangle(matrix) << endl;
    cout << "Arithmetic Mean of the Upper Triangular Part of the Matrix Elements: " << findMeanUpperTriangle(matrix) << endl;

    vector<float> minRows = minRowValues(matrix);
    cout << "Minimum Values in Rows: ";
    for (float minRow : minRows)
        cout << minRow << " ";
    cout << endl;

    vector<float> minCols = minColumnValues(matrix);
    cout << "Minimum Values in Columns: ";
    for (float minCol : minCols)
        cout << minCol << " ";
    cout << endl;

    vector<float> maxRows = maxRowValues(matrix);
    cout << "Maximum Values in Rows: ";
    for (float maxRow : maxRows)
        cout << maxRow << " ";
    cout << endl;

    vector<float> maxCols = maxColumnValues(matrix);
    cout << "Maximum Values in Columns: ";
    for (float maxCol : maxCols)
        cout << maxCol << " ";
    cout << endl;

    vector<float> meanRows = meanRowValues(matrix);
    cout << "Arithmetic Mean Values of Rows: ";
    for (float meanRow : meanRows)
        cout << meanRow << " ";
    cout << endl;

    vector<float> meanCols = meanColumnValues(matrix);
    cout << "Arithmetic Mean Values of Columns: ";
    for (float meanCol : meanCols)
        cout << meanCol << " ";
    cout << endl;

    cout << "Sum of Elements in the Lower Triangular Part of the Matrix: " << sumLowerTriangle(matrix) << endl;
    cout << "Sum of Elements in the Upper Triangular Part of the Matrix: " << sumUpperTriangle(matrix) << endl;

    cout << "Element Closest to the Arithmetic Mean: " << closestToMean(matrix) << endl;

    return 0;
}