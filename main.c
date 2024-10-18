#include "raylib.h"
#define WINDOW_TITLE "This is my first Raylib app"
#define INIT_SCREEN_WIDTH  1024
#define INIT_SCREEN_HEIGHT 768
#define BASE_FONT_SIZE 60

// TODO: Focus window on start
// TODO: Draw some shapes
// TODO: Try animations

Vector2 GetTextUpperLeftCorner(const char * text, int fontSize)
{
  const float screenWidth = GetScreenWidth();
  const float screenHeight = GetScreenHeight();
  const float textOffsetWidth = MeasureText(text, fontSize);

  Vector2 result = {
    .x = (screenWidth / 2) - (textOffsetWidth / 2),
    .y = screenHeight / 2 - fontSize
  };

  return result;
}

void DrawHint()
{
  const char * text  = "Press [F] to toggle Fullscreen";
  const int fontSize = BASE_FONT_SIZE / 2;
  Vector2 ltCorner = GetTextUpperLeftCorner(text, fontSize);
  DrawText(text, ltCorner.x, ltCorner.y + fontSize, fontSize, LIGHTGRAY);
}

void DrawHero(void)
{
  const int fontSize = BASE_FONT_SIZE;
  const char * text  = "Hello, Raylib <3";
  Vector2 ltCorner = GetTextUpperLeftCorner(text, fontSize);
  DrawText(text, ltCorner.x, ltCorner.y, fontSize, RAYWHITE);
}

int main(void)
{
  SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_TOPMOST | FLAG_WINDOW_ALWAYS_RUN);
  SetTargetFPS(60);
  InitWindow(INIT_SCREEN_WIDTH, INIT_SCREEN_HEIGHT, WINDOW_TITLE);

  while(!WindowShouldClose()) {
    if(IsKeyDown(KEY_F)) !IsWindowMaximized() ? MaximizeWindow() : RestoreWindow();
  
    BeginDrawing();
    ClearBackground(DARKGRAY);
    DrawHero();
    DrawHint();
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
