#include "paddle.h"
#include "raylib.h"

Paddle::Paddle(bool isLeft, int up, int down)
{
    if (!isLeft)
    {
        x = GetScreenWidth() - Paddle_Width;
        upKey = up;
        downKey = down;
    }
    else
    {
        x = 0;
        upKey = up;
        downKey = down;
    }
    y = GetScreenHeight() / 2 - (Paddle_Height / 2);
    score = 0;
}
double Paddle::getX()
{
    return x;
}
double Paddle::getY()
{
    return y;
}
void Paddle::move()
{

    if (IsKeyDown(downKey))
    {
        y += 5;
    }
    if (IsKeyDown(upKey))
    {
        y -= 5;
    }
    if (y > GetScreenHeight() - Paddle_Height)
    {
        y = GetScreenHeight() - Paddle_Height;
    }
    if (y < 0)
    {
        y = 0;
    }
}
void Paddle::draw()
{
    DrawRectangle(x, y, Paddle_Width, Paddle_Height, WHITE);
}
int Paddle::getScore(){
    return score;
}