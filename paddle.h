#pragma once

const int Paddle_Width = 20;
const int Paddle_Height = 100;

class Paddle{
    private:
        double y;
        double x;
        int upKey;
        int downKey;
        int score;
    public:
        Paddle(bool controller, int up, int down);
        double getX();
        double getY();
        void move();
        void draw();
        int getScore();

};