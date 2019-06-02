#include <iostream>
using namespace std;

int main() {
    char currentChar;
    int count = 0;

    //cin >> currentChar;
    cin.get(currentChar);           // currentChar = cin.get();
    
    while(currentChar != '$') {
        count++;
        //cin >> currentChar;
        cin.get(currentChar); 
    }
    cout << count << endl;
}
