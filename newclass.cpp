#include <iostream>
#include <array>
#include <vector>
#include <stdint.h>
#include <fstream>

#include "newclass.h"


Haus::Haus(std::string door, uint8_t amountDoor){
    this->door = door;
    this->amountDoor  = amountDoor;
}

void Haus::ausgabe(){
    std::cout<<door<<amountDoor<<std::endl;
}
  
