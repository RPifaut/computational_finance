#pragma once
typedef unsigned long long  myLong;

class RandomGenerator
{
    public:

        RandomGenerator();
        virtual double Generate() = 0;
        double Mean();
        ~RandomGenerator();

};