#include "ball.h"
#include "raylib.h"

Ball::Ball()
{
    reset();
}

void Ball::draw()
{
    DrawCircle(x, y, CIRCLE_RADIUS, WHITE);
}
void Ball::update(bool leftHit, bool righHit)
{
    bool left;
    if (vx < 0)
    {
        left = true;
    }
    else
    {
        left = false;
    }
    y = vy + y;
    x = vx + x;
    if (leftHit && left)
    {
        vx = vx * -1.1;
        vy = vy * 1.1;
    }
    if (righHit && !left)
    {
        vx = vx * -1.1;
    }
    if( vx > BALL_MAX_SPEED){
        vx = BALL_MAX_SPEED;
    }
    if(vx < -BALL_MAX_SPEED){
        vx = -BALL_MAX_SPEED;
    }
    if(vy > BALL_MAX_SPEED - 2){
        vy = BALL_MAX_SPEED - 2;
    }
    if(vy < -BALL_MAX_SPEED + 2){
        vy = -BALL_MAX_SPEED + 2;
    }
    if (y + CIRCLE_RADIUS > GetScreenHeight())
    {
        vy = vy * -1;
    }
    if (y - CIRCLE_RADIUS < 0)
    {
        vy = vy * -1;
    }
}
double Ball::getX()
{
    return x;
}
double Ball::getY()
{
    return y;
}
int Ball::pointCheck()
{
    if (x + CIRCLE_RADIUS < 0)
    {
        return 1;
    }
    else if (x - CIRCLE_RADIUS > GetScreenWidth())
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
void Ball::reset()
{
    x = GetScreenWidth() / 2;
    y = GetScreenHeight() / 2;
    vx = 5;
    if (vx < 0)
    {
        vx = BALL_START_SPEED * -1;
        vy = BALL_START_SPEED - 2;
    }
    else
    {
        vx = BALL_START_SPEED;
        vy = BALL_START_SPEED - 2;
    }
}
