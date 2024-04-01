#include "Game.h"
#include "raylib.h"

int main(void)
{
    Game* game = Game::GetInstance();

    while (!WindowShouldClose())
    {
        game->Update();
        game->Draw();
    }

    CloseWindow();

    return 0;
}