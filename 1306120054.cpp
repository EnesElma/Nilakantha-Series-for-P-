/**
 * Enes Elma
 * 1306120054
 */
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double n=0;

    for(double k=0;k<1000000;k++){
        n+=pow(-1,k)/((2*k+2)*(2*k+3)*(2*k+4));     //Nilakantha Series
    }

    double pi=3+4*n;
    cout<<pi<<endl;

    return 0;
}