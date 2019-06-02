#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> v1;
    int i = 0;
    while(i < 100) {
        cout << "Size : "<< v1.size() << " " << "Capacity : " << v1.capacity() << endl;
        v1.push_back(i);
        i++;
    }

}
