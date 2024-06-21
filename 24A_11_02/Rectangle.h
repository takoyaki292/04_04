#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	Rectangle();
	//IShapeの中に関数を呼ぶ
	void Size() override;
	void Draw() override;
private:

	float radius_;
	float size_;
};