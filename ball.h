#pragma once

const int CIRCLE_RADIUS = 10;
const int BALL_START_SPEED = 5; 
const int BALL_MAX_SPEED = 20;

class Ball{
    private:
        double x;
        double y;
        double vx;
        double vy;
        
    public:
        Ball();
        void draw();
        void update(bool leftHit, bool rightHit);
        double getX();
        double getY();
        int pointCheck();
        void reset();

};