#include "Kennel.h"
#include <iostream>

using namespace std;

int Kennel::kennelCount = 0;

Kennel::Dog::Dog() {}

Kennel::Kennel(int cap) : capacity(cap), size(0) {
    dogs = new Dog[capacity];
}

Kennel::~Kennel() {
    delete[] dogs;
}

int Kennel::getKennelCount() {
    return kennelCount;
}

void Kennel::add(Dog d) {
    if (size < capacity) {
        dogs[size++] = d;
        kennelCount++;
    }
}

void Kennel::add(Dog dogsArray[], int num) {
    int i = 0;
    while (size < capacity && i < num) {
        dogs[size++] = dogsArray[i++];
        kennelCount++;
    }
}

Kennel::Dog Kennel::adoptDog() {
    if (size > 0) {
        Dog adoptedDog = dogs[--size];
        kennelCount--;
        return adoptedDog;
    }
}
