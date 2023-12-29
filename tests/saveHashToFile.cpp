
#include <iostream>
#include <fstream>

using namespace std;

const unsigned int HASH_LEN = 64;


void saveHashToFile(const char* str, const char* filename) {
    ofstream outFile(filename, ios::binary);

    if (!outFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    outFile.write(str, HASH_LEN);
    outFile.close();
    cout << "String saved to file: " << filename << endl;
}

int main() {
    const char* myString = "111111This is a 64-symbol string that will be saved to a file.12";

    const char* filename = "../../1KB.txt";

    saveHashToFile(myString, filename);

    return 0;
}