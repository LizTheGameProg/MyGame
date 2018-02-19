#include "minecraftchess.h"
#include "GameEngine/world.h"

MinecraftChess::MinecraftChess(int argc, char** argv)
	: BaseGame(argc, argv)
{
	
}

MinecraftChess::~MinecraftChess()
{
	
}

void MinecraftChess::OnInit()
{
	
}

void MinecraftChess::OnLoad()
{
	AccessWorld().AddEntity(&board);
}

void MinecraftChess::OnUpdate()
{
	
}

void MinecraftChess::OnRender()
{
	
}

void MinecraftChess::OnDeLoad()
{
	
}

void MinecraftChess::OnDeInit()
{
	
}