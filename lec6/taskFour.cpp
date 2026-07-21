#include <iostream>
#include <string>

using namespace std;

int main(){
    int choice;
    double price;
    
    cout<<"Selcet your tea\n"<<endl;
    cout<<"1. Green Tea"<<endl;
    cout<<"2. Black Tea"<<endl;
    cout<<"3. Herbal Tea"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    switch(choice){
       case 1:
            price =2.0;
            cout<<"You have selected Green Tea"<<endl;
            cout<<"Price: $"<<price<<endl;
            break;
        case 2:
            price = 1.5;
            cout<<"You have selected Black Tea"<<endl;
            cout<<"Price: $"<<price<<endl;
            break; 
        default:
            cout<<"Invalid choice"<<endl;
    }
}