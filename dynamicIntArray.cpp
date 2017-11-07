#include <iostream>
using namespace std;

// POTENTIAL TEST QUESTION

int main()
{
    double sum = 0;
    int size;

    // 1. Capture input
    cout << "How many numbers do you want to store? ";
    cin >> size;

    // 2. Allocate array of doubles based on input
    double *info = new double[size];

    // 3. Fill in the values
    for(int i = 0; i < size; ++i)
    {
        cout << "Enter a double value: ";
        cin >> info[i];
    }

    // 4. Display values. Keep track of sum of them
    for(int i = 0; i < size; ++i)
    {
        cout << i << " values: " << info[i] << endl;
        sum += info[i];
    }

    // 5. Display sum
    cout << "The sum is: " << sum << endl;

    //6
    delete[] info;

    return 0;
}