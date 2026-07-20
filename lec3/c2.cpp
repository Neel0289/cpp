#include <iostream>
#include <string>

using namespace std;

int main() {
    int tea;
    cin >> tea;
    int price = (int)(tea*0.1+tea);
    cout << "Total price: " << price << endl;
    return 0;
}