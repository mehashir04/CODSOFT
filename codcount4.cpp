#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the name of the text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile) {
        cout << "Error opening file. Make sure the file exists.\n";
        return 1;
    }

    int wordCount = 0;
    string word;

    while (inputFile >> word) {
        wordCount++;
    }

    cout << "Total word count: " << wordCount << endl;

    inputFile.close();

    return 0;
}
