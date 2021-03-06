///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final Exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Rectangle.h"


class Square : public Rectangle {   /// A square is a rectangle but a rectangle isn't a square!

//////////////////// Constructor ////////////////////
public:
    Square( double newSide );


//////////////////// Getter ////////////////////
public:
    double getSide();

};
