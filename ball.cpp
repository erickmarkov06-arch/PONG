#include "ball.h"
#include "raylib.h"

Ball::Ball(){
    x = GetScreenWidth() / 2 + 10;
    y = GetScreenHeight() / 2;
    vx = 5;
    vy = 3;
}

void Ball::draw(){
    DrawCircle(x, y, CIRCLE_RADIUS, WHITE);
}
void Ball::update(){
    y = vy + y;
    x = vx + x;
    if(y + CIRCLE_RADIUS > GetScreenHeight()){
        vy = vy * -1;
    }
    if(y - CIRCLE_RADIUS < 0){
        vy = vy * -1;
    } 
    if(x  + CIRCLE_RADIUS > GetScreenWidth()){
        vx = vx * -1;
    }
    if(x - CIRCLE_RADIUS < 0){
        vx = vx * -1;
    }
    
}