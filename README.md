#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int* numbers = new int[n];  // dynamically allocate array

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Average = " << average << endl;

    delete[] numbers;  // free allocated memory
    return 0;
}
