#include "raylib.h"
#define INIT_SCREEN_WIDTH  1024
#define INIT_SCREEN_HEIGHT 768
#define FONT_SIZE 60


void DrawTextCenter(const char* text, int fontSize, Color color)
{
  const int screenWidth = GetScreenWidth();
  const int screenHeight = GetScreenHeight();
  const int textOffsetWidth = MeasureText(text, fontSize);
  const int posX = (screenWidth / 2) - (textOffsetWidth / 2);
  const int posY = screenHeight / 2 - fontSize;
  DrawText(text, posX, posY, fontSize, color);
}


// TODO: Press F to fullscreen
// TODO: Focus window on start
// TODO: Draw some shapes
// TODO: Try animations
int main(void)
{
  int screenWidth    = INIT_SCREEN_WIDTH;
  int screenHeight   = INIT_SCREEN_HEIGHT;
  const int fontSize = FONT_SIZE;
  const char * title = "This is my first Raylib app";
  const char * text  = "Hello, AWESOME Raylib <3";

  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  SetTargetFPS(60);
  InitWindow(screenWidth, screenHeight, title);

  while(!WindowShouldClose()) {
    screenWidth  = GetScreenWidth();
    screenHeight = GetRenderHeight();

    BeginDrawing();

    ClearBackground(DARKGRAY);

    DrawTextCenter(text, fontSize, RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
