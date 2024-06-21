#include "Rectangle.h"
#include<stdio.h>
Rectangle::Rectangle()
{
	float width=3.0f;
	float height = 3.0f;
	width_ = width;
	height_ = height;
}

//サイズを求めている
void Rectangle::Size()
{
	//面積を求めている
	size_ = width_ * height_;
}

//出力をする
void Rectangle::Draw()
{
	printf("矩形のサイズは%f", size_);
}


