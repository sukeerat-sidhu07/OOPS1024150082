#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("data.txt");
    fout << "Hello World\n";
    fout << "This is a test file\n";
    fout << "C++ File Handling\n";
    fout.close();

    ifstream fin("data.txt");
    if (!fin) {
        cout << "Error opening file!";
        return 1;
    }

    fin.seekg(9);  

    cout << "Current position: " << fin.tellg() << endl;

    char ch;
    cout << "\nRemaining content:\n";
    while (fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}