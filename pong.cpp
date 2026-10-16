#include <raylib.h>
#include "paddle.h"
#include "ball.h"

const int screenWidth = 800;
const int screenHeight = 450;

enum Status{
    menu,
    playing,
    gameover
};

void drawArena(){
    for(int i = 0; i < GetScreenHeight() / 2 + 5; i ++){
        DrawRectangle(GetScreenWidth() / 2 + 5, 60 * i, 10, 40, WHITE);
    }
}
void drawScore(int score, bool leftSide){
    if(leftSide){
        DrawText(TextFormat("%d", score),  (GetScreenWidth() / 2) - 50, 10, 70, WHITE);
    }else{
        DrawText(TextFormat("%d", score),  (GetScreenWidth() / 2) + 30, 10, 70, WHITE);
    }
}

int main()
{
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);
    Status current = menu;
    
    Paddle Player1(true, KEY_W, KEY_S);
    Paddle Ai(false, KEY_UP, KEY_DOWN);
    Ball ball = Ball();
    


    while (!WindowShouldClose())
    {
        Player1.move();
        Ai.move();
        BeginDrawing();
        ClearBackground(BLACK);
        ball.draw();
        drawArena();
        Player1.draw();
        Ai.draw();
        drawScore(Player1.getScore(), true);
        drawScore(Ai.getScore(), false);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
