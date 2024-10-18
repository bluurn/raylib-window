#include "raylib.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
  const int screenWidth = 1024;
  const int screenHeight = 768;
  const int fontSize = 40;
  const char * text = "Hello, Raylib <3";
  const char * title = "This is my first Raylib app";


  SetTargetFPS(60);
  InitWindow(screenWidth, screenHeight, title);

  const int textOffsetWidth = MeasureText(text, fontSize);

  while(!WindowShouldClose()) {

    BeginDrawing();

    ClearBackground(DARKGRAY);

    DrawText(text, (screenWidth / 2) - (textOffsetWidth / 2), screenHeight / 2 - fontSize, fontSize, RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
