#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("data.txt", ios::out | ios::in);
    if (!file) {
        cout << "Error opening file!";
        return 1;
    }
    string text = "Hello World";
    for (int i = 0; i < text.length(); i++) {
        file.put(text[i]);

        cout << "Position after writing '" << text[i] << "': "
             << file.tellp() << endl;
    }

    file.seekp(6); 
    file << "C++  ";

    file.seekg(0);
    char ch;
    cout << "\nFinal content in file:\n";
    while (file.get(ch)) {
        cout << ch;
    }
    file.close();
    return 0;
}