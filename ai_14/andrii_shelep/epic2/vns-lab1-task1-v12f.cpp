#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a=1000, b=0.0001, c, d, e, f;

    c = pow(a+b,2);
    d = pow(a,2);
    e=2*a*b;
    f=pow(b,2);

    double r = (c-(d+e))/f; 
    
    cout << "float:" << r << endl;
    
    return 0;
}