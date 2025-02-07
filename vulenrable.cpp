#include <iostream>
#include <cstring>

using namespace std;

// Dangerous function: Uses gets(), which is unsafe
void insecureInput() {
    char buffer[10];
    cout << "Enter input: ";
    gets(buffer); // Buffer overflow vulnerability
    cout << "You entered: " << buffer << endl;
}

int main() {
    int b, m;
    insecureInput();
    return 0;
}
