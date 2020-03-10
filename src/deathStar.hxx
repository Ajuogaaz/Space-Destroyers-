#pragma once
#include "geometry.hxx"
#include <ge211.hxx>
#include "missile.hxx"
#include "destroyer.hxx"

class DeathStar : Destroyer{

public:

    explicit DeathStar(Geometry const &);

    ///
    /// Member Variables
    ///

    ge211::Dimensions velocity;
    int life;



};