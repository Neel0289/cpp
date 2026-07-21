#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaOrder;
    cout << "Enter your tea order: "<<endl;
    getline(cin,teaOrder);

    if(teaOrder == "green tea"){
        cout << "You ordered green tea." << endl;
    } else if(teaOrder == "black tea"){
        cout << "You ordered black tea." << endl;
    } else if(teaOrder == "herbal tea"){
        cout << "You ordered herbal tea." << endl;
    } else {
        cout << "Sorry, we don't have that type of tea." << endl;
    }
}