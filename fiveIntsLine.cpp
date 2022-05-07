// Copyright (c) 2022 Paterry Baptichon All rights reserved
//
// Created by Paterry Baptichon
// Created on 2022-05-06
// this program prints out integers from 1000 to 200 with five integers
// per line
#include <iostream>

int main() {
    // this program prints out integers from 1000 to 200 with five integers
    // per line
    int counter;

    // process of printing the integers from 1000 to 2000
    // output of  five integers per line with each integer separated by a space
    for (counter = 1000; counter < 2001; counter++) {
        if ((counter + 1) % 5 == 0) {
                std::cout << counter << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
}
