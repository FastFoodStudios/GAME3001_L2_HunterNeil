#pragma once
#ifndef __OBSTACLE__
#define __ OBSTacle__
#include "DisplayObject.h"

class Obstacle final : public DisplayObject
{
public:
	// constructor
	Obstacle();
	
	// destructor
	~Obstacle();

	// life cycle functions
	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__OBSTACLE__)*/
