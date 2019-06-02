#include <iostream>
using namespace std;
#include <cstring>          // Inbuilt functions for char array
#include <string>           // Data type for string

// return the size of output array after filling all subsequences
int subsequences(string input, string output[]) {
    // Base case
    if(input.size() == 0) {
        output[0] = "";
        return 1;
    }

    // Recursive call
    int s = subsequences(input.substr(1), output);

    // Small calculation
    for(int i = 0; i < s; i++) {
        output[i+s] = input[0] + output[i];
    }

    return 2 * s;

}

int main() {
 
    string input;
    cin >> input;
    string output[1000];

    int size = subsequences(input, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << endl;
    }

    
    
    
    /*
    char a[] = "hello"; 
    string b = "hey";

    b = "abcdef";

    // Size of string b
    cout << b.size() << endl;       // 6
    
    // Copy one string to other
    string s = "abc";
    string t = "pqrst";

    s = t;
    cout << s << endl;

    // Concatenate 2 strings
    s = s + t;
    t = s + t;

    // Compare 2 strings
    s = "abc";
    t = "abc";
    if(s == t) {
        cout << "equal" << endl;
    }
    else {
        cout << "Not equal " << endl;
    }

    // Find string in other string
    s = "welcodcomecod";
    t = "code";

    cout << s.find(t) << endl;

    // Substring
    s = "abcdef";
    cout << s.substr(1, 4) << endl;
    cout << s.substr(1) << endl;











    
    // a = "abc";              // Invalid
    int d[] = {1, 2, 3};
    // d = {4, 5, 6};          // Invalid
    */




















    /*
    char input[] = "abcdef";

    // Length of string
    int len = strlen(input);        // 6

    // COmpare 2 strings
    char input2[] = "abcdef";
    if(strcmp(input, input2) == 0) {
        cout << "Equal " << endl;
    }
    else {
        cout << "Not equal " << endl;
    }

    // Concatenate 2 strings
    char a[] = "hey";
    char b[] = "hello";
    
    strcat(a, b);
    cout << a << endl;
    cout << b << endl;
    

    // Copy one string to other
    char a[10] = "hey";
    char b[10] = "hello";
    strcpy(a, b);
    cout << a << endl;      // hello
    */








}
