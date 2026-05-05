#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("alpha.txt");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        fout << ch;
    }
    fout.close();

    fstream file("alpha.txt", ios::in | ios::out);
    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    char ch;

    file.seekg(9);
    file.get(ch);
    cout << "10th character: " << ch << endl;

    file.seekp(4);   
    file.put('X');

    file.seekg(0, ios::end);
    cout << "File size: " << file.tellg() << " bytes" << endl;

    file.seekg(-1, ios::end);
    file.get(ch);
    cout << "Last character: " << ch << endl;

    file.close();
    return 0;
}