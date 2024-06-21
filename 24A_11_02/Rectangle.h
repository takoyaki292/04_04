#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	Rectangle();
	//IShapeの中に関数を呼ぶ
	void Size() override;
	void Draw() override;
private:

	float height_;
	float width_;
	
	float size_;
};