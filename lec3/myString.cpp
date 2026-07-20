#include <iostream>
#include <string>
using namespace std;

int main() {
    string userTea;
    int teaQuantity;
    cout << "What would you like to order in tea?";
    getline(cin, userTea);
    cout << "How many cups of " << userTea << " would you like to order?";
    cin >> teaQuantity;
    cout << teaQuantity << endl;
    cout << userTea;
    return 0;
}