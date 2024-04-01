#include "Game.h"
#include "raylib.h"

Game::Game()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Raylib C++");

    SetTargetFPS(30);
}

void Game::Update()
{
}

void Game::Draw()
{
    BeginDrawing();
    ClearBackground(BLACK);

    const char* text = "Hello world!";
    int fontSize = 50;

    int textSize = MeasureText(text, fontSize);
    DrawText(text, GetRenderWidth() / 2 - (textSize / 2), GetRenderHeight() / 2, fontSize, WHITE);

    EndDrawing();
}
