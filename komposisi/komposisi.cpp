#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main (){
    Manusia* varManusia = new Manusia("jino");
    delete varManusia;
    return 0;
}

