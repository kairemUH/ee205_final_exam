///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Final Exam - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Square.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    return 0;
}
