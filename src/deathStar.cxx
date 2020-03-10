#include "geometry.hxx"
#include <ge211.hxx>
#include "missile.hxx"
#include "destroyer.hxx"
#include "deathStar.hxx"


DeathStar::DeathStar(Geometry const & geometry )
          : Destroyer(geometry, {0, 0})
          ,velocity(geometry.deathStar_velocity)
          ,life(geometry.d_life)
          {}
