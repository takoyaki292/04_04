#pragma once
#include "IShape.h"

class Circle:public IShape
{
public:
	Circle();
	//IShape‚Ì’†‚ÉŠÖ”‚ğŒÄ‚Ô
	void Size() override;
	void Draw() override;

private:
	float radius_;
	float size;
};