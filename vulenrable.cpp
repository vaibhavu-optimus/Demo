#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

#define max 100

const int var = 100;

// Dangerous function: Uses gets(), which is unsafe
void insecureInput() {
    char buffer[10];
    cout << "Enter input: ";
    gets(buffer); // Buffer overflow vulnerability
    cout << "You entered: " << buffer << endl;
}

// Dangerous function: Uses system() with user input (Command Injection)
void executeCommand() {
    char command[50];
    cout << "Enter command to execute: ";
    cin >> command;
    system(command); // Arbitrary command execution vulnerability
}

// Dangerous function: Hardcoded secret key (should be flagged by Snyk)
void hardcodedSecret() {
    const char* apiKey = "SECRET-123456"; // Hardcoded sensitive data
    cout << "Using API Key: " << apiKey << endl;
}

// Dangerous function: Opens a file without checking permissions
void insecureFileAccess() {
    fstream file;
    file.open("important.txt", ios::in); // No permission validation
    if (file.is_open()) {
        cout << "Opened file successfully!" << endl;
    } else {
        cout << "Failed to open file!" << endl;
    }
}

int main() {
    insecureInput();
    executeCommand();
    hardcodedSecret();
    insecureFileAccess();
    return 0;
}
