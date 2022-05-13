///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final Exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Shape.h"


class Rectangle : public Shape {

//////////////////// Member Variables ////////////////////
protected:
    double length;
    double width;


//////////////////// Constructor ////////////////////
public:
    Rectangle( double newLength, double newWidth );


//////////////////// Getters ////////////////////
public:
    double getWidth() const noexcept;
    double getLength() const noexcept;


//////////////////// Override Function ////////////////////
public:
    double compute_area() const noexcept override;

};