#include "raylib.h"
#define WINDOW_TITLE "This is my first Raylib app"
#define INIT_SCREEN_WIDTH  1024
#define INIT_SCREEN_HEIGHT 768
#define FONT_SIZE 60

// TODO: Focus window on start
// TODO: Draw some shapes
// TODO: Try animations


void DrawTextCenter(const char* text, int fontSize, Color color)
{
  const int screenWidth = GetScreenWidth();
  const int screenHeight = GetScreenHeight();
  const int textOffsetWidth = MeasureText(text, fontSize);
  const int posX = (screenWidth / 2) - (textOffsetWidth / 2);
  const int posY = screenHeight / 2 - fontSize;
  DrawText(text, posX, posY, fontSize, color);
}

int main(void)
{
  SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_TOPMOST);
  SetTargetFPS(60);
  InitWindow(INIT_SCREEN_WIDTH, INIT_SCREEN_HEIGHT, WINDOW_TITLE);

  const char * text  = "Hello, AWESOME Raylib <3";

  while(!WindowShouldClose()) {
    if(IsKeyDown(KEY_F)) !IsWindowMaximized() ? MaximizeWindow() : RestoreWindow();
      
    BeginDrawing();

    ClearBackground(DARKGRAY);
    DrawTextCenter(text, FONT_SIZE, RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
