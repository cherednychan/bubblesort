#include <iostream>

using namespace std;

class BubbleSort {
public:
    void bubblesort(int Array[], int size) {
        int temp;
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (Array[j] > Array[j + 1]) {
                    temp = Array[j];
                    Array[j] = Array[j + 1];
                    Array[j + 1] = temp;
                }
            }
        }
    }
};

void Input(int Array[], int size) {
    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i <= size - 1; i++) {
        cin >> Array[i];
    }
}

void Print(int Array[], int size) {
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int* array = new int[size];
    BubbleSort sort;
    Input(array, size);
    sort.bubblesort(array, size);
    Print(array, size);
    return 0;
}