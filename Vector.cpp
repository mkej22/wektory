//
// Created by krato on 20.06.2024.
//

#include "Vector.h"

#include <cmath>
#include <iostream>

Vector::Vector(double numbers[], int size) {
    this->numbers = numbers;
    this->size = size;
}

Vector::~Vector() {
}

double Vector::calc_length() {
    double sum = 0;
    for (int i = 0; i < sizeof(numbers); i++) {
        sum += numbers[i] * numbers[i];
    }

    return sqrt(sum);
}

Vector* Vector::copy() {
    double* tmp = new double[sizeof(&numbers)];
    for (int i = 0; i < sizeof(&numbers); i++) {
        tmp[i] = numbers[i];
    }
    return new Vector(tmp, get_size());
}

int Vector::get_size() {
    return this->size;
}

double Vector::get_number(int index) {
    return numbers[index];
}

void Vector::set_number(int index, double number) {
    numbers[index] = number;
}

Vector* Vector::add(Vector *second_vector) {
    if (this->get_size() != second_vector->get_size()) {
        return nullptr;
    }

    double* results = new double[get_size()];

    for (int i = 0; i < second_vector->get_size(); i++) {
        results[i] = this->get_number(i) + second_vector->get_number(i);
    }

    return new Vector(results, get_size());
}

Vector* Vector::substract(Vector *second_vector) {
    if (this->get_size() != second_vector->get_size()) {
        return nullptr;
    }

    double* results = new double[get_size()];

    for (int i = 0; i < second_vector->get_size(); i++) {
        results[i] = this->get_number(i) - second_vector->get_number(i);
    }

    return new Vector(results, get_size());
}

double Vector::dot_product(Vector *second_vector) {
    if (this->get_size() != second_vector->get_size()) {
        return 0.0;
    }

    double results = 0.0;

    for (int i = 0; i < this->get_size(); i++) {
        results += this->get_number(i) * second_vector->get_number(i);
    }

    return results;
}

void Vector::print() {
    std::cout << "Values[ ";
    for (int i = 0; i < this->get_size(); i++) {
        std::cout << this->get_number(i);
        if (i < get_size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
