//
// Created by Kai Matsusaka on 5/13/22.
//

#pragma once

#include "Shape.h"

class Rectangle : public Shape {

//////////////////// Member Variables ////////////////////
protected:
    double length;
    double width;


//////////////////// Constructor ////////////////////
public:
    Rectangle(double newLength, double newWidth);


//////////////////// Getters ////////////////////
public:
    double getWidth() const noexcept;

    double getLength() const noexcept;


//////////////////// Override Function ////////////////////
public:
    double compute_area() const noexcept override;

};