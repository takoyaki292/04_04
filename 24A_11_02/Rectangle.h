#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	Rectangle();
	//IShape‚Ì’†‚ÉŠÖ”‚ğŒÄ‚Ô
	void Size() override;
	void Draw() override;
private:

	float height_;
	float width_;
	
	float size_;
};