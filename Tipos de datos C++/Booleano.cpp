// Un dato booleano solo puede ser verdadero o falso.
// Por ejemplo, si queremos saber si un perro tiene hambre, podemos usar un booleano.
// Si tiene hambre, se asigna `true` y si no, se asigna `false`.

#include <iostream>
using namespace std;

int main() {
    bool tieneHambre = true;
    bool tieneSed = false;

    cout << "¿El perro tiene hambre? " << (tieneHambre ? "Si" : "No") << endl;
    cout << "¿El perro tiene sed? " << (tieneSed ? "Si" : "No") << endl;

    return 0;
}

