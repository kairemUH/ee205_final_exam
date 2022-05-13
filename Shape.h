//
// Created by Kai Matsusaka on 5/13/22.
//

#pragma once

#include <iostream>

class Shape {

    virtual double compute_area() const noexcept=0; //public vitual abstract method that will be declared in future shapes

};
