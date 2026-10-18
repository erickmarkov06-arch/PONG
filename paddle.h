#pragma once

const int Paddle_Width = 18;
const int Paddle_Height = 120;
const int Paddle_Speed = 10;

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
        bool collision(double ballX, double ballY, double ballRadius);
        void addScore();

};