///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final Exam - EE 205 - Spr 2022
///
/// @file Shape.h
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>


class Shape {   /// Abstract Class from which shapes can be made

    virtual double compute_area() const noexcept=0; /// All shapes have area

};
