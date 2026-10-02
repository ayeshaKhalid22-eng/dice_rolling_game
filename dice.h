#include <iostream>
#include <random>
using namespace std ;
int rollDie() {
  random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 6);
    return dis(gen);
}

