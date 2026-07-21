#include <iostream>
#include <string>

using namespace std;

int main(){
    int teaCups;
    cout<<"Enter the number of teaCups to serve: "<<endl;
    cin>>teaCups;

    while(teaCups>0){
        teaCups--;
        cout<<"Serving a cup of tea"<<teaCups<<"remaining"<<endl;
    }

    cout<<"All tea cups are served."<<endl;
    return 0;
}