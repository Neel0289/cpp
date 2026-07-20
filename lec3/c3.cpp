#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    getline(cin,name);
    int amount;
    cin >> amount;
    cout << "According to your order, you need "<<"x"<<amount <<name<<endl;
    return 0;    
}