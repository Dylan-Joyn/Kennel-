#pragma once
#ifndef KENNEL_H
#define KENNEL_H

class Kennel {
public:
    class Dog {
    public:
        Dog();
    };

    Dog* dogs;
    int capacity;
    int size;
    static int kennelCount;

public:
    Kennel(int cap);
    ~Kennel();

    static int getKennelCount();

    void add(Dog d);
    void add(Dog dogsArray[], int num);
    Dog adoptDog();
};

#endif
