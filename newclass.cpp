#include <iostream>
#include <array>
#include <vector>
#include <stdint.h>
#include <fstream>

#include "newclass.h"


Auto::Auto(std::string bd1, uint16_t pq1){
    this->brand=bd1;
    this->ps=pq1;
    std::cout<<"bin hier angelangt"<<std::endl;
}

void Auto::ausgabe(){
    std::cout<<brand<<std::endl<<ps<<std::endl;
}

