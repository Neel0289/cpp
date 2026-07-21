#include <iostream>
#include <string>

using namespace std;

int main(){
    int cups;
    double pricePerCup = 2.5,totalPrices,discount;
    cout<<"Enter the number of teaCups: "<<endl;
    cin>>cups;
    totalPrices = pricePerCup * cups;
    if(cups>20){
        discount = 0.20;

    }else if(cups>= 10 && cups<=20){
        discount=0.10;
    }else{
        discount =0;
    }
    totalPrices = totalPrices-(totalPrices*discount);
    cout<<"Total price after discount is: "<<totalPrices<<endl;
}