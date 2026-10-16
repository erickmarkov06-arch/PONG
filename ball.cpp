#include "ball.h"
#include "raylib.h"

Ball::Ball(){
    x = GetScreenWidth() / 2 + 10;
    y = GetScreenHeight() / 2;
}

void Ball::draw(){
    DrawCircle(x, y, CIRCLE_RADIUS, WHITE);
}