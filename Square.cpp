//
// Created by Kai Matsusaka on 5/13/22.
//

#include "Square.h"


//////////////////// Constructor ////////////////////

Square::Square( double newSide ) : Rectangle( newSide, newSide ) {}


//////////////////// Getter ////////////////////

double Square::getSide() {
    return Square::width;
}