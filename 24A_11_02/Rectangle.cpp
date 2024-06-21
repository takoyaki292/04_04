#include "Rectangle.h"
#include<stdio.h>
Rectangle::Rectangle()
{
	//半径が2.0f
	float radius = 2.0f;
	radius_ = radius;
}

//サイズを求めている
void Rectangle::Size()
{
	size_ = radius_ * radius_;
}

//出力をする
void Rectangle::Draw()
{
	printf("矩形のサイズは%f", size_);
}


