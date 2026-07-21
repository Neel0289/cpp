#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaTypes[3] = {"Green Tea", "Black Tea","Lemon Tea"};
    int teaCups = 5; 
    for(int i=1;i<=teaCups;i++){
        cout << "Brewing cup "<<i<<" of tea.."<<endl;
    }

    cout<< "Outside of loop"<<endl;
    return 0;
}