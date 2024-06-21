#pragma once
#include "IShape.h"

class Circle:public IShape
{
public:
	Circle();
	//IShapeの中に関数を呼ぶ
	void Size() override;
	void Draw() override;

private:
	float radius_;
	float size;
};