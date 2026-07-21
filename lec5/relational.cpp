#include <iostream>

using namespace std;

int main(){
    int cups;
    cout<<"Enter the number of cups you have";
    cin>>cups;
    if (cups>20){
        cout<<"You will get a gold badge"<<endl;
    }else if (cups<=20 && cups>=10){
        cout << "You will get a silver badge"<<endl;


    }else{
        cout<<"No badge for youu"<<endl;
    }
    return 0;
}