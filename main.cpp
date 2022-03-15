#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a = 0, b = 0, c = 0, Atriangolo = 0, Aquadrato = 0, Arettangolo = 0, Atrapezio = 0;
cout << "Inserire tre valori" << endl;
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
cout << "L\' area del triangolo di lato " << a << " e altezza " << b << " e\' " << Atriangolo << endl;
cout << "L\' area del quadrato di lato " << a << " e\' " << Aquadrato << endl;
cout << "L\' area del rettangolo di lati " << a << " e " << b << " e\' " << Arettangolo << endl;
cout << "L\' area del trapezio di base minore " << a << ", di base maggiore " << b << " e di altezza " << c << " e\' " << Atrapezio << endl;
return 0;
}
