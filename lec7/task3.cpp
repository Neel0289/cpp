#include <iostream>
#include <string>

using namespace std;

int main(){
    int teaCups = 5;
    int i = 100;
     for(int i=1;i<=teaCups;i++){
        cout<< "Brewing a cup of tea"<<i<<"of tea"<<endl;
     }
     cout<<i<<endl;
     cout<<"Outside of loop"<<endl;
     return 0;
}