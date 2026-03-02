#include <iostream>
using namespace std;

float r, phi = 3.14159;

void input(){
    cout << "Masukkan jari-jari: ";
    cin >> r;
}

float luas(float a, float b){
    return a*(b*b);
}

void output(){
    cout << "Luas = " << luas(phi, r);
}

int main(){
    input();
    output();
}