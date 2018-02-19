#include "GameEngine/basegame.h"

class MinecraftChess : public BaseGame
{
public:
	MinecraftChess() = delete;
	MinecraftChess(int argc, char** argv);
	~MinecraftChess();
	
	void OnInit();
	void OnLoad();
	void OnUpdate();
	void OnRender();
	void OnDeLoad();
	void OnDeInit();
};