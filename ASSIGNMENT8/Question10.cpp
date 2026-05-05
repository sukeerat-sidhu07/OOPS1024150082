#include <iostream>
using namespace std;
template <class T>
class Array {
private:
    T arr[5];  
    int n;
public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Array<int> a1;
    Array<float> a2;
    cout << "Integer Array:\n";
    a1.input();
    a1.display();
    cout << "\nFloat Array:\n";
    a2.input();
    a2.display();
    return 0;
}