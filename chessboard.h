#pragma once
#include "GameEngine/entity.h"

class ChessBoard : public Entity
{
public:
	ChessBoard();
	~ChessBoard();
	
	void * boardGrid[8][8];
};