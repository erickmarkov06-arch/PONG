#pragma once

const int CIRCLE_RADIUS = 10;

class Ball{
    private:
        double x;
        double y;
        double vx;
        double vy;
    public:
        Ball();
        void draw();
        void update();

};