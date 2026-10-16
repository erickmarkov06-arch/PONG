#include "ball.h"
#include "raylib.h"

Ball::Ball(){
    x = GetScreenWidth() / 2 + 10;
    y = GetScreenHeight() / 2;
    vx = 5;
    vy = 3;
    offY = true;
}

void Ball::draw(){
    DrawCircle(x, y, CIRCLE_RADIUS, WHITE);
}
void Ball::update(){
    y = vy + y;
    x = vx + x;
    if(y > GetScreenHeight()){
        vy = vy * -1;
    }
    if(y < 0){
        vy = vy * -1;
    } 
    if(x > GetScreenWidth()){
        vx = vx * -1;
    }
    if(x < 0){
        vx = vx * -1;
    }
    
}