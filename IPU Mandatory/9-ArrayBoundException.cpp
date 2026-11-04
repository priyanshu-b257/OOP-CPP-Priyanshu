#include <iostream>
#include <stdexcept>
using namespace std;

class SafeArray {
    int arr[10] = {};

public:
    void set(int index, int value) {
        if (index < 0 || index >= 10)
            throw out_of_range("Invalid index value.");
        arr[index] = value;
    }

    int get(int index) const {
        if (index < 0 || index >= 10)
            throw out_of_range("Invalid index value.");
        return arr[index];
    }
};

int main() {
    SafeArray array;
    try {
        array.set(0, 10);
        array.set(2, 30);
        cout << "The value at index 0 is " << array.get(0) << endl;
        cout << "The value at index 2 is " << array.get(2) << endl;
        cout << "For index -1, we get ";
        cout << array.get(-1) << endl;
    } catch (out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
}
