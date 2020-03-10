#include "model.hxx"
#include <catch.hxx>

TEST_CASE("Test if Asteroid hits side test")
{
    ge211::Position grid{1000, 1500};

    asteroid Asteroid();
    Asteroid.position{90, 90};
    CHECK_FALSE(Asteroid.hit_side(grid));
    Asteroid.position{-2, 50};
    CHECK(Asteroid.hit_side(grid));

}
TEST_CASE("Missile Out of bounds")
{
    ge211::Position grid{1000, 1500};

    missile Missile(30, 30);
    CHECK_FALSE(Missile.hit_bound(grid));

    CHECK(Missile.alive);

    Missile.position{400, 1600};
    CHECK(Missile.hit_bound(grid));
    Missile.destroy()
    CHECK_FALSE(Missile.alive);

}

TEST_CASE("Player gets hit")
{
    model M();




}
//
// TODO: Write preliminary model tests.
//
// These tests should demonstrate at least six of the functional
// requirements.
//
