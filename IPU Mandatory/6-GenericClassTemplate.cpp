#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Pair {
    T a, b;

public:
    Pair(T x, T y) : a(x), b(y) {}

    ~Pair() {
        cout << "destructor called\n";
    }

    T larger() const {
        return a > b ? a : b;
    }
};

int main() {
    Pair<int> p(10, 20);
    cout << p.larger() << "\n";

    Pair<double> q(3.5, 1.2);
    cout << q.larger() << "\n";

    Pair<char> r('a', 'z');
    cout << r.larger() << "\n";

    Pair<string> s("apple", "banana");
    cout << s.larger() << "\n";
}
