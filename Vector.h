//
// Created by krato on 20.06.2024.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <string>


class Vector {

private:
    double* numbers;
    int size;

public:
    Vector(double numbers[], int size);

    ~Vector();

    Vector* copy();

    Vector* add(Vector* second_vector);

    Vector* substract(Vector* second_vector);

    double dot_product(Vector* second_vector);

    double calc_length();

    int get_size();

    double get_number(int index);

    void set_number(int index, double number);

    void print();
};



#endif //VECTOR_H
