#include "raylib.h"

void DrawTextCenter(const char* text, int screenWidth, int screenHeight, int fontSize, Color color)
{
  const int textOffsetWidth = MeasureText(text, fontSize);
  const int posX = (screenWidth / 2) - (textOffsetWidth / 2);
  const int posY = screenHeight / 2 - fontSize;
  DrawText(text, posX, posY, fontSize, color);
}

int main(void)
{
  const int screenWidth = 1024;
  const int screenHeight = 768;
  const int fontSize = 40;
  const char * text = "Hello, Raylib <3";
  const char * title = "This is my first Raylib app";


  SetConfigFlags(FLAG_WINDOW_TOPMOST);
  SetTargetFPS(60);
  InitWindow(screenWidth, screenHeight, title);

  while(!WindowShouldClose()) {

    BeginDrawing();

    ClearBackground(DARKGRAY);

    DrawTextCenter(text, screenWidth, screenHeight, fontSize, RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
