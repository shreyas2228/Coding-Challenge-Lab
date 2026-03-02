#include<iostream>
using namespace std;

int main(){
    int num;
    int count = 0;
    cout<<"enter a number"<< endl;
    cin>>num;

    while(num != 0){
        num = num/10;
        count++;
    }
    cout<<"length of the number is:" << count << endl;
    return 0;
}