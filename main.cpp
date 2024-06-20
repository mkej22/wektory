#include <iostream>

#include "Vector.h"

using namespace std;

int main() {

    double *array = new double[3];
    cout<<"Podaj pierwsza współrzedną pierwszego wektora"<<endl;
    cin >> array[0];
    cout<<"Podaj drugą współrzedną pierwszego wektora"<<endl;
    cin >> array[1];
    cout<<"Podaj trzecią współrzedną pierwszego wektora"<<endl;
    cin >> array[2];

    Vector* first_vector = new Vector(array, 3);

    double *second_array = new double[3];
    cout<<"Podaj pierwsza współrzedną drugiego wektora"<<endl;
    cin >> second_array[0];
    cout<<"Podaj drugą współrzedną drugiego wektora"<<endl;
    cin >> second_array[1];
    cout<<"Podaj trzecią współrzedną drugiego wektora"<<endl;
    cin >> second_array[2];

    Vector* second_vector = new Vector(second_array, 3);

    cout << "V1 + V2 = ";
    first_vector->add(second_vector)->print();

    cout << "V1 - V2 = ";
    first_vector->substract(second_vector)->print();

    cout << "V1 * V2 = ";
    cout << first_vector->dot_product(second_vector) << endl;

    cout << "Length of V1 = ";
    cout << first_vector->calc_length() << endl;

    cout << "Length of V2 = ";
    cout << second_vector->calc_length() << endl;

    return 0;
}
