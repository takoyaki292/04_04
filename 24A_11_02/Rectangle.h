#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	Rectangle();
	//IShape�̒��Ɋ֐����Ă�
	void Size() override;
	void Draw() override;
private:

	float height_;
	float width_;
	
	float size_;
};