#include "minecraftchess.h"

typedef MinecraftChess MyGame;

int main(int argc, char** argv)
{
	MyGame game(argc, argv);
	if(game.Init())
	{
		game.Load();
		game.Run();
		game.DeLoad();
	}
	game.DeInit();
	return game.Exit();
}