#include <iostream>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0, Atriangolo = 0, Aquadrato = 0, Arettangolo = 0, Atrapezio = 0;
    cout << "Inserire tre valori" << endl;
    cin >> a >> b >> c;
    Atriangolo = (a*b)/2;
    Aquadrato = a*a;
    Arettangolo = a*b;
    Atrapezio = ((a + b)*c)/2;
    cout << Atriangolo << endl;
    cout << Aquadrato << endl;
    cout << Arettangolo << endl;
    cout << Atrapezio << endl;
    return 0;
}

