#include<iostream>

using namespace std;

int main(){
    int i,j;
    int another_total = 0;
    int total = 0;

    for(i = 0;i < 10;i++){
        total += i;
    }

    for(j = 0;j < 100;j++){
        another_total += j;
    } 

    return total + another_total;
}