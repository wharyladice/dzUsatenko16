

#include <iostream>
#include<Windows.h>

using namespace std;
void elements(int* array1, int size1, int* array2, int size2, int* resultArray, int& resultSize) {
    resultSize = 0;
    for (int i = 0;i < size1;i++) {
        for (int j = 0;j < size2;j++) {
            if (*(array1 + i) == *(array2 + j)) {
                *(resultArray + resultSize) = *(array1 + 1);
                    resultSize++;
                    break;
            }
        }
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 5;
    const int m = 7;
    int a[n] = { 1,2,3,4, 5 };
    int b[m] = { 4,5,6,7,8,9,10 };
    int c[n + m];
    int resultSize;
    elements(a, n, b, m, c, resultSize);
    cout << "Спiльнi елементи: ";
    for (int i = 0;i < resultSize;i++) {
        cout << *(c + i) << " ";
    }
    cout << endl;
    return 0;



}

