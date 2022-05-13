///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final Exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"


//////////////////// Constructor ////////////////////

Rectangle::Rectangle( double newLength, double newWidth ) {

    if( newLength <= 0 || newWidth <= 0 ) {
        throw std::invalid_argument( "length and width must be > 0." );
    }

    else {
        Rectangle::length = newLength;
        Rectangle::width  = newWidth;
    }

}


//////////////////// Getters ////////////////////

double Rectangle::getWidth() const noexcept {
    return Rectangle::width;
}

double Rectangle::getLength() const noexcept {
    return Rectangle::length;
}


//////////////////// Override Function ////////////////////

double Rectangle::compute_area() const noexcept {
    return Rectangle::length * Rectangle::width;
}
