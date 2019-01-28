#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <fstream>


#include "MyMatrix3.h"
#include "MyVector3.h"


using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();
	string load_file(const std::string &src);
	string s;
	string line;
	string output;
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void points();
	void keyInputs();
	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};

#endif