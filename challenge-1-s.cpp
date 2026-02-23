#include<iostream>
#include<string>
using namespace std;

int main(){

    string names[] = {"ananth","shreyas","rashmi","spporthy"};
    int n = sizeof(names)/sizeof(names[0]);

    int max_length = 0;

    for(int i=0; i<n; i++){
        int length = names[i].length();

        if(length > max_length){
            max_length = length;
        }

    }
    cout << "The length of the longest name is: "<< max_length <<endl;
    return 0;
}