#pragma once
#include <SDL.h>

// Vector2 struct just stores x/y coordinates

struct Vector2 
{
	float x; 
	float y;
};


// Game class
class Game
{
public:
	Game();
	// Initialize the game
	bool Initialize();
	// Runs the game loop until the game is over
	void RunLoop();
	// Shutdown the game
	void Shutdown();
private:
	// Helper functions for the game loop
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// Window created by SDL
	SDL_Window* mWindow;
	// Renderer for 2D drawing
	SDL_Renderer* mRenderer;
	// Number of ticks since start of game
	Uint32 mTicksCount;
	// Game should continue to run
	bool mIsRunning;

	// Pong specific direction of paddle
	int mPaddleDir;
	// Pong specific direction of paddle 2
	int mPaddle2Dir;
	// Position of paddle
	Vector2 mPaddlePos;
	// Position of paddle 2
	Vector2 mPaddle2Pos;
	// Position of ball
	Vector2 mBallPos;
	// Velocity of ball 
	Vector2 mBallVel;

};

